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
int main(){
    int  num;
    char ch;
    system("cls");
    cout << "Welcome to Bank";

		cout<<"\n\n\n\tMAIN MENU";
		cout<<"\n\n\t01. NEW ACCOUNT";
		cout<<"\n\n\t02. DEPOSIT AMOUNT";
		cout<<"\n\n\t03. WITHDRAW AMOUNT";
		cout<<"\n\n\t04. SHOW ALL DEPOSIT";
		cout<<"\n\n\t05. SHOW ALL WITHDRAW DEPOSIT";
		cout<<"\n\n\t06. EXIT";
		cout<<"\n\n\tSelect Your Option (1-6) : ";
		cin>>ch;
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
			cout<<"\n\n\tThanks for using bank managemnt system";
			break;
		 default :cout<<"\a";
		}
	return 0;
    
}
void write_account(){
    fstream file1,file2;
    int Age , money;
    string id_card;
    string account_num, Name, surname ,address ,birthDay, M_type;
    
    string text1,text2,text3,text4,text5,text6,text7,text8;
    string accountnum;

    file2.open("account.txt",ios::in | ios::app);
    cout << "Enter account number : ";
    cin >> account_num;
    while (!file2.eof())
    {
        file2 >> accountnum >> text1 >> text2 >> text3;
        file2 >> text4 >> text5 >> text6 >> text7 >> text8;
        do
        {
            system("cls");
            cout << "Enter account number : ";
            cin >> account_num;

        } while (account_num==accountnum);
        if (account_num != accountnum)
        {
            break;
        }
        
        
        
    }
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
        cout << "Enter account number : " << account_num << "\n";        
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
        file1 << " " << account_num << " "
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
                total=en_money+money;
                
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
                cout << account_num << "\t\t" << " " << Name 
                << " " << surname << "\t\t\t\t"<< M_type 
                << "\t\t" << money << "\t\t\t" << date_text << "\n";
            }
            
            
        }
    }


    file1.close();
    system("pause");
    main();
}

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
                cout << account_num << "\t\t" << " " << Name 
                << " " << surname << "\t\t\t\t"<< M_type 
                << "\t\t" << money << "\t\t\t" << date_text << "\n";
            }
        }
    }
    file1.close();
    system("pause");
    main();

}