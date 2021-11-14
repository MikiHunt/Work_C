#include<iostream>
#include<fstream>
#include<cctype>
#include<iomanip>
#include <ctime>
#include <string>
using namespace std;

void write_account();	
void deposit();
void withdraw();
void show_all_deposit();
void show_all_withdraw();
void del_account();
void show_deposit_withdraw();

//------------------------- Menu ------------------------------------------------
int main(){
    int  num;
    char ch;
    system("cls");
    cout << "Welcome to Bank";

    cout << "\n\n\n\tMAIN MENU";
    cout << "\n\n\t01. NEW ACCOUNT";
    cout << "\n\n\t02. DEPOSIT AMOUNT";
    cout << "\n\n\t03. WITHDRAW AMOUNT";
    cout << "\n\n\t04. SHOW ALL DEPOSIT";
    cout << "\n\n\t05. SHOW ALL WITHDRAW DEPOSIT";
    cout << "\n\n\t06. DELETE ACCOUNT";
    cout << "\n\n\t07. SHOW ALL";
    cout << "\n\n\t08. EXIT";
    cout << "\n\n\tSelect Your Option (1-8) : ";
    cin >> ch;
    system("cls");
    switch(ch)
    {
    case '1':
        write_account();
        break;
    case '2':
        deposit();
        break;
    case '3':
        withdraw();
        break;
    case '4': 
        show_all_deposit();
        break;
    case '5':
        show_all_withdraw();
        break;
        case '6':
        del_account();
        break;
    case '7':
        show_deposit_withdraw();
        break;
    case '8':
        cout<<"\n\n\tThanks for using bank managemnt system";
        break;
        default :cout<<"\a";
    }
	return 0;
    
}

//-------------------------------- สมัครบัญชี -------------------------------------------------
void write_account(){
    fstream file1,file2;
    int Age , money ;
    long double account_num;
    string id_card;
    string  Name, surname ,address ,birthDay, M_type;
    
    string text1,text2,text3,text4,text5,text6,text7,text8;
    long double accountnum;

    file2.open("account.txt",ios::in | ios::app);
    do
    {
        system("cls");
        cout << "Enter account number : ";
        cin >> account_num;
    }
    while (account_num < 1000000000 || account_num > 10000000000);
    

    while (!file2.eof())
    {
        file2 >> accountnum >> text1 >> text2 >> text3;
        file2 >> text4 >> text5 >> text6 >> text7 >> text8;

        while (account_num == accountnum)
        {
            system("cls");
            cout << "Enter account number : ";
            cin >> account_num;
        }
        while (account_num < 1000000000 || account_num > 10000000000)
        {
            system("cls");
            cout << "Enter account number : ";
            cin >> account_num;
        }
    
    }
    file2.close();
    cout << "Enter ID card number : ";
    cin >> id_card;
    cout << "Enter Name : ";
    cin >> Name;
    cout << "Enter surname : ";
    cin >> surname;
    cout << "Enter Birth day [Day/Month/Year]: ";
    cin >> birthDay;
    cout << "Enter Age : ";
    cin >> Age;
    cout << "Enter address : ";
    cin >> address;
    do
    {
        system("cls");
        cout << "Enter account number : " << fixed << setprecision(0)<< account_num << "\n";        
        cout << "Enter ID card number : " << id_card  << "\n";        
        cout << "Enter Name : " << Name << "\n";        
        cout << "Enter surname : " << surname << "\n";        
        cout << "Enter Birth day [Day/Month/Year] : " << birthDay << "\n";        
        cout << "Enter Age : " << Age << "\n";
        cout << "Enter address : " << address << "\n";
        cout << "Enter type S/C/D/F [Saving/Credit/Daily/Fixed] : ";
        cin >> M_type;
    } while (M_type != "S"&&M_type != "C"&&M_type != "D"&&M_type != "F");
    cout << "Enter first deposit : ";
    cin >> money;
    
 
    file1.open("account.txt",ios::app);
    if(!file1){
        cout << "No information";
    }else{
        file1 << " " << fixed << setprecision(0) << account_num << " "
            << id_card << " " << Name << " "
            << surname << " " << birthDay << " "
            << Age << " " << address << " " << M_type 
            << " " << money << "\n";
    }
    
    file1.close();
    cout << "\n\n\t\tRegister succeed\n\n" ;
    system("pause");
    main();
}

//-------------------------------------- ฝากเงิน -----------------------------------------------------
void deposit(){
    fstream file1 , file2 ;
    int acc_num;
    string id_card;
    int   account_num,Age , money , en_money;
    string Name, surname ,address ,birthDay , typ ,M_type;
    int day , month , year , count = 0;
    time_t ttime = time(0);
	tm *local_time = localtime(&ttime);
    day=local_time->tm_mday;
	month= 1 + local_time->tm_mon;
	year = 2443 + local_time->tm_year;

    file1.open("account.txt",ios::in);
    file2.open("deposit.txt",ios::app | ios::out);
    if(!file1){
        cout << "No information";
    }else{
        do
        {
            system("cls");
            cout << "Enter type S/C/D/F [Saving/Credit/Daily/Fixed] : ";
            cin >> typ;
        } while (typ != "S"&&typ != "C"&&typ != "D"&&typ != "F");
        
        
        cout << "Enter account number : ";
        cin >> acc_num;
        while (!file1.eof())
        {
            
            file1 >> account_num >> id_card;
            file1 >> Name >> surname >> birthDay;
            file1 >> Age >> address >> M_type >> money; 
            

            if (account_num == acc_num && typ == M_type)
            {   
                cout << "Enter deposit : ";
                cin >> en_money;

                file2 << " " << account_num << " "
                << Name << " " << surname << " " << typ << " "
                << en_money << " "<< day << "/" << month 
                << "/" << year << "\n"; 
                count+=1;
                break;
            }            
        }
    }
    if(count == 0){
        cout << "\nThis information is not available.\n\n"; 

    }
   
    file1.close();
    file2.close();
    int total;
    file1.open("account.txt",ios::in);
    file2.open("account1.txt",ios::app | ios::out);
    if (!file1)
    {
        cout << "No information";
    }else{
        file1 >> account_num >> id_card;
        file1 >> Name >> surname >> birthDay;
        file1 >> Age >> address >> M_type >> money; 
        while (!file1.eof())
        {
            if (account_num == acc_num && typ == M_type)
            {
                total = en_money + money;
                
                file2 << " " << account_num << " "<< id_card << " "
                << Name << " " << surname << " " << birthDay << " "
                << Age << " " << address << " " <<typ << " " 
                << total << " " << "\n"; 
                
                
            }else{
                file2 << " " << account_num << " " << id_card << " "
                << Name << " " << surname << " " << birthDay << " "
                << Age << " " << address << " " << M_type << " " 
                << money << " " << "\n"; 
            }
            file1 >> account_num >> id_card;
            file1 >> Name >> surname >> birthDay;
            file1 >> Age >> address >> M_type >> money;             
        }
    }
 
	file1.close();
	file2.close();
	remove("account.txt");
	rename("account1.txt",
		   "account.txt");
    system("pause");
    main();
}

//------------------------------------------------ ถอนเงิน --------------------------------------------------
void withdraw(){

    fstream file1 , file2 ;
    int acc_num;
    string id_card;
    int account_num , Age , money , en_money;
    string Name, surname ,address ,birthDay , typ ,M_type;
    int day , month , year , count = 0;

    time_t ttime = time(0);
	tm *local_time = localtime(&ttime);
    day=local_time->tm_mday;
	month= 1 + local_time->tm_mon;
	year = 2443 + local_time->tm_year;

    file1.open("account.txt",ios::in);
    file2.open("withdraw.txt",ios::app | ios::out);
    if(!file1){
        cout << "No information";
    }else{
        do
        {
            system("cls");
            cout << "Enter type S/C/D/F [Saving/Credit/Daily/Fixed] : ";
            cin >> typ;
        } while (typ != "S"&&typ != "C"&&typ != "D"&&typ != "F");
        cout << "Enter account number : ";
        cin >> acc_num;
    
        while (!file1.eof())
        {
            file1 >> account_num >> id_card;
            file1 >> Name >> surname >> birthDay;
            file1 >> Age >> address >> M_type >> money; 

            if (account_num == acc_num && typ == M_type)
            {   
                cout << "Enter withdraw : ";//<-- แก้ด้วย ไม่ยากหรอก ใครกันนะ
                cin >> en_money;

                file2 << " " << account_num << " "
                << Name << " " << surname << " " << typ << " "
                << en_money << " "<< day << "/" << month 
                << "/" << year << "\n"; 
                count+=1;
                break;
            }            
        }
    }
    if(count == 0){
        cout << "\nThis information is not available.\n\n"; 
    }
   
    file1.close();
    file2.close();
    int total;
    file1.open("account.txt",ios::in);
    file2.open("account1.txt",ios::app | ios::out);
    if (!file1)
    {
        cout << "No information";
    }else{
        file1 >> account_num >> id_card;
        file1 >> Name >> surname >> birthDay;
        file1 >> Age >> address >> M_type >> money; 
        while (!file1.eof())
        {
            
            if (account_num == acc_num && typ == M_type)
            {
                total=money-en_money;
                
                file2 << " " << account_num << " "<< id_card << " "
                << Name << " " << surname << " " << birthDay << " "
                << Age << " " << address << " " <<typ << " " 
                << total << " " << "\n"; 
                
                
            }else{
                file2 << " " << account_num << " " << id_card << " "
                << Name << " " << surname << " " << birthDay << " "
                << Age << " " << address << " " << M_type << " " 
                << money << " " << "\n"; 
            }
            file1 >> account_num >> id_card;
            file1 >> Name >> surname >> birthDay;
            file1 >> Age >> address >> M_type >> money;             
        }
    }
 
	file1.close();
	file2.close();
	remove("account.txt");
	rename("account1.txt",
		   "account.txt");
    system("pause");
    main();
}

//----------------------------------------------------------------- โชว์การฝากเงิน ------------------------------------------------------------------------
void show_all_deposit(){
    fstream file1;
    int account_num,  money;
    string Name, surname , M_type , date_text ,en_date;

    file1.open("deposit.txt",ios::in);
    if(!file1){
        cout << "No information";
    }else{
        cout << "Enter the date showing all deposits [30/12/2564]: ";
        cin >> en_date;
        cout << "\n=========================================================================================================================\n";
        cout << "Account\t\t\t\tName\t\t\t\tTyp\t\tMoney\t\t\tDate\n" ;
        cout << "=========================================================================================================================\n";

        while (!file1.eof())
        {
            file1 >> account_num >> Name ;
            file1 >> surname >> M_type;
            file1 >> money >> date_text;
            if(file1.eof()){
                break;

            }
            if (en_date == date_text)
            {
                cout << right << setw(10) << account_num << left << setw(20) 
                << " " << Name
                << right << setw(10) << " " << surname << setw(23) << M_type 
                << setw(17) << money << setw(22) << date_text << "\n";
            }            
        }
    }//ว่า คงเหลืออะไร วันที่ ไม่อยากพิมพ์เยอะ เห็นแล้ว ใช่


    file1.close();
    system("pause");
    main();
}

//-------------------------------------------------------------------- โชว์การถอนเงิน ----------------------------------------------------------------
void show_all_withdraw(){
    fstream file1;
    int account_num,  money;
    string Name, surname , M_type , date_text ,en_date;

    file1.open("withdraw.txt",ios::in);
    if(!file1){
        cout << "No information";
    }else{
        cout << "Enter the date showing all deposits [30/12/2564]: ";
        cin >> en_date;
        cout << "\n=========================================================================================================================\n";
        cout << "Account\t\tName\t\t\t\tTyp\t\tMoney\t\t\tDate\n" ;
        cout << "=========================================================================================================================\n";

        while (!file1.eof())
        {
            file1 >> account_num >> Name ;
            file1 >> surname >> M_type;
            file1 >> money >> date_text;
            if(file1.eof()){
                break;
            }
            if (en_date == date_text)
            {
                cout << account_num << setw(10) << " " << Name 
                << " " << surname << setw(23) << M_type 
                << setw(17) << money << setw(22) << date_text << "\n";
            }
        }
    }
    file1.close();
    system("pause");
    main();

}
 //---------------------------------------------------------------------- ปิดบัญชี ---------------------------------------------------------------------------------
void del_account(){
    fstream file1,file2;
    string id_card;
    int account_num , Age , money , en_money;
    string Name, surname ,address ,birthDay , typ ,M_type;
    int id_acc , count=0;
    file1.open("account.txt",ios::in);
    file2.open("account1.txt",ios::app | ios::out);
    if (!file1)
    {
        cout << "No information";
    }else{
        cout << "Enter the account number you want to delete : ";
        cin >> id_acc;
        file1 >> account_num >> id_card;
        file1 >> Name >> surname >> birthDay;
        file1 >> Age >> address >> M_type >> money; 
        while (!file1.eof())
        {
            
            if (id_acc == account_num)
            {
                system("cls");
				cout << "\n\n\t\t\t\t"
					<< "Delete a Account";
				cout << "\n\nAccount is Deleted "
						"Successfully...\n\n";
				count++;
            }else{
                file2 << " " << account_num << " "
                << id_card << " " << Name << " "
                << surname << " " << birthDay << " "
                << Age << " " << address << " " << M_type 
                << " " << money << "\n";

            }
            file1 >> account_num >> id_card;
            file1 >> Name >> surname >> birthDay;
            file1 >> Age >> address >> M_type >> money; 
        }
        if(count == 0){
            cout << "\n\nAccount ID "
				<< "Not Found...\n";
        }
        
    }
    system("pause");
	file1.close();
	file2.close();
	remove("account.txt");
	rename("account1.txt",
		"account.txt");
    main();
    
}

void show_deposit_withdraw(){
    fstream file1 , file2 ;
    string acc1 , name1 , surname1 , type1 , money1 ,date1;
    string acc2 , name2 , surname2 , type2 , money2 ,date2;
    string en_acc;
    file1.open("deposit.txt",ios::in);
    file2.open("withdraw.txt",ios::in);
    if(!file1){
        cout << "No information";
    }else{
        cout << "Enter the date showing all deposits [30/12/2564]: ";//<--แก้ด้วย รับอะไรมา
        cin >> en_acc;
        cout << "\n=========================================================================================================================\n";
        cout << "Section\t\tDate\t\tName\t\t\t\tTyp\t\tMoney\n" ;
        cout << "=========================================================================================================================\n";

        file1 >> acc1 >> name1 >> surname1 >> type1 >> money1 >> date1;
        file2 >> acc2 >> name2 >> surname2 >> type2 >> money2 >> date2;
        cout <<"Deposit\n";
        while (!file1.eof())
        {            
            if (en_acc == acc1)
            {
                cout << "\t\t" << date1 << right << setw(10) << name1 << " " 
                << surname1 << setw(25) << right  << type1 << right 
                << setw(18) << money1 << "\n";

            }                   

            file1 >> acc1 >> name1 >> surname1 >> type1 >> money1 >> date1;//เรียงตามวันที่เราทำอยู่แล้ว

        }
        cout <<"Withdraw\n";
        while (!file2.eof())
        {
            
            if (en_acc == acc2){ //ปราณีไหนเว็บที่จะให้ดูบอกให้หน่อยแย่นิสัยไม่ดี มาแบ่งดูหน่อยย ให้ดูตอนไหน

                cout << "\t\t" << date2 << right << setw(10) << name2 << " " 
                << surname2 << setw(25) << right  << type2 << right 
                << setw(18) << money2 << "\n"; 

            }
            file2 >> acc2 >> name2 >> surname2 >> type2 >> money2 >> date2;
        }                
    }
    file1.close();
    file2.close();
    cout << "\n\n";
    system("pause");
    main();
}
//นอนเช้า นั้นแหละคือไม่ได้ดู หลายหน้าสิ หน้าขาวหรอ เกินฝันร้ายดูแล้ว ดีกว่าฉันเยอะ ไม่อยากหา ฮ้าๆๆ
/*
แล้วงานแก้อะไรต่อ ขำอะไรกัน ก็อันนี้คนเดียว

*/