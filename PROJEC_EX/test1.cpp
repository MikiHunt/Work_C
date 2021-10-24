#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <ctime>

using namespace std;

void main_menu();
void login();
void admin_login();
void admin_control_panel();
void add_book();
void show_book();
void check_book();
void update_book();
void del_book();
void bookShopRecord();
void registr();
void user_menu();
void book_borrowed_menu(string name);
void borrow_books(string name);
void return_books(string name);
void check_borrow_book();
void show_book_all();
void show_borrow_book(string name);
void show_borrow_book1(string name);
void show_return_book(string name);
void show_all_user();
void menu_update();
void update_status_book();
void update_stock_book();
void sortdata (int total[] , int count);

int main () 
{	
	
	main_menu();
	return 0; 

}

void main_menu()
{
	system("cls");
	int choice;
	cout << "\n\t\t\tMAIN MENU";
  	cout << "\n\n1. USER LOGIN";
	cout << "\n2. REGISTR";
  	cout << "\n3. ADMIN LOGIN";
	cout << "\n4. EXIT";
  	cout << "\n\nEnter your choice : ";
  	cin>>choice;
  	switch (choice)
  	{
  		case 1:
    		login();
    		break;
  		case 2:
    		registr();
    		break;
		case 3:
			admin_login();
			break;
		case 4:
			break;
  		default:
    		cout << "\n\nINVALID CHOICE\n";
			system("cls");
			main_menu();
			
  	}
}

void login()
{
  	int count=0;
  	string user,pass,u,p,n,s,d;
	fstream file;
	
  	system("cls");
  	cout<<"please enter the following details"<<endl;
  	cout<<"USERNAME :";
  	cin>>user;
  	cout<<"PASSWORD :";
  	cin>>pass;
	
	file.open("user_from.txt",ios::in);
	if(!file)
	{
		cout << "\n\nFile Opening Error!";
	}else{
		
		while(file>>u>>p>>n>>s>>d)
		{
			if(u==user && p==pass)
			{
				count=1;
				system("cls");
			}
		}
	}
	file.close();
  	if(count==1)
  	{
    	cout<<"\nHello "<<user<<"\nLOGIN SUCESS\n";  
		book_borrowed_menu(user);
  	}
  	else
  	{
    	cout<<"\nLOGIN ERROR\nPlease your username and password\n";
		system("pause");
    	main();
  	}
}

void admin_login()
{
  	int count=0;
  	string user,pass,u,p,r;
	fstream file;
	  
  	system("cls");
  	cout<<"please enter the following details"<<endl;
  	cout<<"ADMINNAME :";
  	cin>>user;
  	cout<<"PASSWORD :";
  	cin>>pass;
	
	file.open("admin.txt",ios::in);
	if(!file){
		cout << "\n\nFile Opening Error!";
	}else{

		while(file>>u>>p>>r)
		{
			if(u==user && p==pass && r == "A")
			{
				count=1;
				system("cls");
			}
		}
	}
  	file.close();
  	if(count==1)
  	{
		cout<<"\nHello "<<user<<"\nLOGIN SUCESS\n"; 
    	bookShopRecord();  
  	}
  	else
  	{
    	cout<<"\nLOGIN ERROR\nPlease check adminname and password\n";
		system("pause");
    	main();
  	}
}

void admin_control_panel()
{
	system("cls");
	cout << "\n\n\t\t\t\tADMIN MENU";
	cout << "\n\n1. ADD BOOK";
	cout << "\n2. DISPLAY BOOKS";
	cout << "\n3. CHECK PARTICULAR BOOK";
	cout << "\n4. MENU UPDATE";
	cout << "\n5. DELETE BOOK";
	cout << "\n6. ALL USER";
	cout << "\n7. MENU";
	cout << "\n8. EXIT";
}

void add_book()
{
	system("cls");
	fstream file;
	int no_copy;
	string b_name, a_name, b_id,b_status;

	cout << "\n\n\t\t\t\tADD BOOKS";
	cout << "\n\nBook ID : ";
	cin >> b_id;
	cout << "\nBook Name : ";
	cin >> b_name;
	cout << "\nAuthor Name : ";
	cin >> a_name;
	cout << "\nNo. of Books : ";
	cin >> no_copy;
  	cout << "\nBooks Status: ";
	cin >> b_status;

	// Open file in append or
	// output mode

	file.open("book.txt",
		ios::out | ios::app);

	file << " " << b_id << " "
		<< b_name << " " << a_name
		<< " " << no_copy 
    	<< " " << b_status 
		<< "\n\n";
		
	file.close();
}

void show_book()
{
	system("cls");
	fstream file;
	int no_copy;
	string b_name, b_id, a_name,b_status;
	cout << "\n\n\t\t\t\t\tAll BOOKS";

	// Open the file in input mode
	file.open("book.txt", ios::in);
	if (!file)
		cout << "\n\nFile Opening Error!";
	else {

		cout << "\n\n\nBook ID\t\tBook"
			 << "\t\tAuthor\t\tNo. of "
				"Books\t\tStatus\n\n";
		file >> b_id >> b_name;
		file >> a_name >> no_copy;
    	file >> b_status;

		// Till end of file is reached
		while (!file.eof()) {

			cout << " " << b_id
				<< "\t\t" << b_name
				<< "\t\t" << a_name
				<< "\t\t" << no_copy
        		<< "\t\t\t" << b_status
				<< "\n\n";
			file >> b_id >> b_name;
			file >> a_name >> no_copy;
      		file >> b_status;
		}
		// Close the file
		file.close();

		system("pause");

		
		
	}
}

void check_book()
{
	system("cls");
	fstream file;
	int no_copy, count = 0;
	string b_id, b_name, a_name, b_idd,b_status;

	cout << "\n\n\t\t\t\tCheck "
		 << "Particular Book";

	// Open the file in input mode
	file.open("book.txt", ios::in);
	if (!file)
		cout << "\n\nFile Opening Error!";
	else {

		cout << "\n\nBook ID : ";
		cin >> b_idd;
		file >> b_id >> b_name;
		file >> a_name >> no_copy;
    	file >> b_status;

		while (!file.eof()) {

			if (b_idd == b_id) {

				system("cls");
				cout << "\n\n\t\t\t\t"
					<< "Check Particular Book";
				cout << "\n\nBook ID : "
					<< b_id;
				cout << "\nName : "
					<< b_name;
				cout << "\nAuthor : "
					<< a_name;
				cout << "\nNo. of Books : "
					<< no_copy;
        		cout << "\nBook Status : "
          			<< b_status;
				cout << endl
					<< endl;
				count++;
				break;
			}
			file >> b_id >> b_name;
			file >> a_name >> no_copy;
      		file >> b_status;
		}
		system("pause");
		file.close();
		if (count == 0)
			cout << "\n\nBook ID Not"
				<< " Found...";
	}
}

void update_book()
{
	system("cls");
	fstream file, file1;
	int no_copy, no_co, count = 0;
	string b_name, b_na, a_name,b_status;
	string a_na, b_idd, b_id,b_st;

	cout << "\n\n\t\t\t\tUpdate Book Record";
	file1.open("book1.txt",
		ios::app | ios::out);
	file.open("book.txt", ios::in);

	if (!file)
		cout << "\n\nFile Opening Error!";
	else {

		cout << "\n\nBook ID : ";
		cin >> b_id;
		file >> b_idd >> b_name;
		file >> a_name >> no_copy;
    	file >> b_status;

		// Till end of file is reached
		while (!file.eof()) {
			if (b_id == b_idd) {
				system("cls");
				cout << "\t\t\t\t"
					 << "Update Book Record";
				cout << "\n\nNew Book Name : ";
				cin >> b_na;
				cout << "\nAuthor Name : ";
				cin >> a_na;
				cout << "\nNo. of Books : ";
				cin >> no_co;
				cout << "\nBook Status : ";
				cin >> b_st;
				file1 << " " << b_id << " "
					<< b_na << " "
					<< a_na << " " << no_co
          			<< " " << b_st
					<< "\n\n";
				count++;
			}
			else
				file1 << " " << b_idd
					<< " " << b_name
					<< " " << a_name
					<< " " << no_copy
          			<< " " << b_status
					<< "\n\n";
			file >> b_idd >> b_name;
			file >> a_name >> no_copy;
      		file >> b_status;
		}
		if (count == 0)
			cout << "\n\nBook ID"
				<< " Not Found...";
	}
	cout << endl;
	system("pause");

	// Close the files
	file.close();
	file1.close();
	remove("book.txt");
	rename("book1.txt",
		   "book.txt");
}

void del_book()
{
	system("cls");
	fstream file, file1;
	int no_copy, count = 0;
	string b_id, b_idd, b_name, a_name,b_status;
	cout << "\n\n\t\t\t\tDelete a Book";

	// Append file in output mode
	file1.open("book1.txt",
			ios::app | ios::out);
	file.open("book.txt",
			ios::in);

	if (!file)
		cout << "\n\nFile Opening Error...";
	else {

		cout << "\n\nBook ID : ";
		cin >> b_id;
		file >> b_idd >> b_name;
		file >> a_name >> no_copy;
    	file >> b_status;
		while (!file.eof()) {

			if (b_id == b_idd) {

				system("cls");
				cout << "\n\n\t\t\t\t"
					<< "Delete a Book";
				cout << "\n\nBook is Deleted "
						"Successfully...\n\n";
				count++;
			}
			else
				file1 << " " << b_idd
					<< " " << b_name
					<< " " << a_name
					<< " " << no_copy
          			<< " " << b_status
					<< "\n\n";
			file >> b_idd >> b_name;
			file >> a_name >> no_copy;
      		file >> b_status;
		}
		if (count == 0)
			cout << "\n\nBook ID "
				<< "Not Found...";
	}
	system("pause");

	// Close the file
	file.close();
	file1.close();
	remove("book.txt");
	rename("book1.txt",
		"book.txt");
}

void bookShopRecord()
{
	int choice;
	char x;
	while (1) {
    admin_control_panel();
		cout << "\nEnter your choice : ";
		cin >> choice;
		switch (choice) {

		case 1:
			do {

				add_book();
				cout << "\n\nWant to add"
					<< " another book? "
						"(y/n) : ";
				cin >> x;
			} while (x == 'y');
			break;

		case 2:
			show_book();
			break;

		case 3:
			check_book();
			break;
		case 4:
			menu_update();
			break;

		case 5:
			del_book();
			break;
		case 6:
			show_all_user();
			
			break;
		case 7:
			main_menu();
		case 8:
			exit(0);
			break;

		default:
			cout << "\n\nINVALID CHOICE\n";
		}
	}
}

void registr()
{
    string reguser,regpass,reg_birthday,reg_name,reg_surname;
    system("cls");
    
    cout<<"Enter the username :";
    cin>>reguser;
    cout<<"\nEnter the password :";
    cin>>regpass;
	cout<<"\nEnter the Name :";
    cin>>reg_name;
	cout<<"\nEnter the surname :";
    cin>>reg_surname;
	cout<<"\nEnter the Birthday :";
    cin>>reg_birthday;
    
    ofstream reg("user_from.txt",ios::app);
    reg << reguser << " " << regpass << " "
		<< reg_name << " " << reg_surname
		<< " " << reg_birthday <<endl;
    system("cls");
    cout<<"\nRegistration Sucessful\n\n";
    main();
}

void user_menu()
{

	cout << "\n\n\t\t\t\tUSER MENU";
	cout << "\n\n1. BORROW BOOKS";
	cout << "\n2. RETURN BOOKS";
	cout << "\n3. SHOW BORROW BOOKS";
	cout << "\n4. SHOW RETURN BOOKS";
	
	cout << "\n6. MENU";
	cout << "\n7. EXIT";

}

void book_borrowed_menu(string name)
{
	int choice;
	char x;
	
	while (1) {
	system("cls");
	cout<<"\nUSER NAME : "<<name;
    user_menu();
		cout << "\nEnter your choice : ";
		cin >> choice;
		switch (choice) {

		case 1:
			do {

				borrow_books(name);
				cout << "\n\nWant to add"
					<< " borrow book? "
						"(y/n) : ";
				cin >> x;
			} while (x == 'y');
			break;

		case 2:
			do
			{	

				return_books(name);
				cout << "\n\nWant to return"
					<< " borrow book? "
						"(y/n) : ";
				cin >> x;
				
			} while (x == 'y');
			
			
			break;

		case 3:
			show_borrow_book(name);
			break;
		case 4:
			show_return_book(name);
			break;

		case 5:
			del_book();
			break;
		case 6:
			main_menu();
			break;
		case 7:
			exit(0);
			break;

		default:
			cout << "\n\nINVALID CHOICE\n";
		}
	}
}
void borrow_books(string name)
{	
	system("cls");
	show_book_all();
	fstream file,file1,file2;
	int no_copy;
	string b_id, b_name, a_name, b_idd,b_status;
	int day,month,year,hour,min,sec;
	int count;


	time_t ttime = time(0);
	tm *local_time = localtime(&ttime);
	tm *ltm = localtime(&ttime);
	day=local_time->tm_mday;
	month= 1 + local_time->tm_mon;
	year = 2443 + local_time->tm_year;
	hour = ltm->tm_hour;
	min = ltm->tm_min;
	sec = ltm->tm_sec;
	// Open the file in input mode
	file.open("book.txt", ios::in);
	file1.open(name+"_borrow.txt",ios::out | ios::app);
	
	if (!file)
		cout << "\n\nFile Opening Error!";
	else {
		
		cout << "\n\nBook ID : ";
		cin >> b_id;
		file >> b_idd >> b_name;
		file >> a_name >> no_copy;
    	file >> b_status;
		while (!file.eof()) 
		{
			if (b_id == b_idd)
			{
				if(b_status=="Y" && no_copy != 0)
				{	
					int o = 0;
					file1 << " " << o << " " 
					<< name << " " 
					<< b_id << " "<< b_name 
					<< " " << a_name
					<< " " << day <<" "
					<< month << " "
					<< year << " " 
					<< hour << " "
					<< min << " "
					<< sec << "\n\n" ;
					cout<<"\nBorrowed Sucessful\n\n";
					break;
				}else{
					cout << "\nOut stok or not on the bookshelf.";
					break;
				}
				file >> b_idd >> b_name;
				file >> a_name >> no_copy;
				file >> b_status;
			}
			
			file >> b_idd >> b_name;
			file >> a_name >> no_copy;
      		file >> b_status;
		}
		
	}
	file.close();
	file1.close();

	fstream file3,file4,file5;
	string re_name,re_bid,re_bname,re_aname;
	int re_day,re_month,re_year,re_hour,re_min,re_sec;
	file3.open(name+"_borrow.txt",ios::in);
	file4.open(name+"_borrow1.txt", ios::out | ios::app);
	file5.open("book.txt", ios::in);
	int p = 0;
	int temp1;
	int i=0;
	int total[10000];
	int total1[10000];
	if (!file3)
	{
		cout << "\n\nFile Opening Error!";
	}else{
		file3 >> count >> re_name;
		file3 >> re_bid >> re_bname;
		file3 >> re_aname >> re_day;
		file3 >> re_month >> re_year;
		file3 >> re_hour >> re_min;
		file3 >> re_sec;
		file5 >> b_idd >> b_name;
		file5 >> a_name >> no_copy;
		file5 >> b_status;
		
		while (!file3.eof())
		{	
			count=count+1;
			file4 << " " <<  count << " "
				<< re_name << " " 
				<< re_bid << " "
				<< re_bname << " "
				<< re_aname << " "
				<< re_day << " "
				<< re_month << " "
				<< re_year << " "
				<< re_hour << " "
				<< re_min << " "
				<< re_sec << "\n\n";
			total[i] = count ;
			i = i + 1;
			
			

			file3 >> count >> re_name;
			file3 >> re_bid >> re_bname;
			file3 >> re_aname >> re_day;
			file3 >> re_month >> re_year;
			file3 >> re_hour >> re_min;
			file3 >> re_sec;
			file5 >> b_idd >> b_name;
			file5 >> a_name >> no_copy;
			file5 >> b_status;
		}
		
		for (int i = 0; i < total[0]; i++)
		{
			total1[i]=total[i];
		}
		int i, tmp;
		do
    	{
			if(i < total[0]-1 && total1[i] > total1[i+1])
			{
				tmp = total1[i+1];
				total1[i+1] = total1[i];
				total1[i] = tmp;
				i = 0;
			}
			else
			{
				i++;
			}
			
		}while(i < total[0]);
		for (int i = 0; i < total[0]; i++)
		{
			cout << "[" << i << "]" << count << " / ";
			cout << total1[i]<<endl;
		}
	}
	file3.close();
	file4.close();
	file5.close();
	string term1,term2;
	term1 = name + "_borrow.txt";
	term2 = name + "_borrow1.txt";
	remove(term1.c_str());
	rename(term2.c_str(),
		   term1.c_str());

	//===========================================================
	fstream file6,file7;
	file6.open(name+"_borrow.txt",ios::in | ios::app);
	file7.open(name+"_show_borrow1.txt", ios::out | ios::app);
	i=0;
	if (!file6)
	{
		cout << "\n\nFile Opening Error!";
	}else{
		file6 >> count >> re_name;
		file6 >> re_bid >> re_bname;
		file6 >> re_aname >> re_day;
		file6 >> re_month >> re_year;
		file6 >> re_hour >> re_min;
		file6 >> re_sec;
		while (!file6.eof())
		{	

			file7<< " " <<  total1[i] << " "
				<< re_name << " " 
				<< re_bid << " "
				<< re_bname << " "
				<< re_aname << " "
				<< re_day << " "
				<< re_month << " "
				<< re_year << " "
				<< re_hour << " "
				<< re_min << " "
				<< re_sec << "\n\n";
			i++;
			file6 >> count >> re_name;
			file6 >> re_bid >> re_bname;
			file6 >> re_aname >> re_day;
			file6 >> re_month >> re_year;
			file6 >> re_hour >> re_min;
			file6 >> re_sec;
		}
	}
	file6.close();
	file7.close();
	string term3,term4;
	term3 = name + "_show_borrow.txt";
	term4 = name + "_show_borrow1.txt";
	remove(term3.c_str());
	rename(term4.c_str(),
		   term3.c_str());


	//=========================================================

	file.open("book.txt", ios::in);
	file2.open("book1.txt",ios::app | ios::out);
	if (!file)
		cout << "\n\nFile Opening Error!";
	else {
		file >> b_idd >> b_name;
		file >> a_name >> no_copy;
    	file >> b_status;
		while (!file.eof()) 
		{
			if (b_id == b_idd && b_status == "Y" && no_copy != 0) 
			{
				no_copy = no_copy - 1;
				file2 << " " << b_id << " "
					<< b_name << " "
					<< a_name << " " << no_copy
					<< " " << b_status
					<< "\n\n";
			}
			else
				file2 << " " << b_idd
					<< " " << b_name
					<< " " << a_name
					<< " " << no_copy
          			<< " " << b_status
					<< "\n\n";
			file >> b_idd >> b_name;
			file >> a_name >> no_copy;
      		file >> b_status;
		}
	}
	
	cout << endl;
	file.close();
	file2.close();
	remove("book.txt");
	rename("book1.txt",
		   "book.txt");
}
void sortdata (int total[] , int count){
	int temp1;
    for(int i=0;i<count;i++)
        {		
            for(int j=i+1;j<count;j++)
            {
                if(total[j]<total[i])
                {
                    temp1  = total[i];
                    total[i] = total[j];
                    total[j] = temp1;
				}
			}
		}
}
void return_books(string name)
{
	show_borrow_book1(name);
	fstream file,file1,file2;
	int day,month,year,hour,min,sec;
	int List_id;
	
	int no_copy;
	int b_day,b_month,b_year;
	int r_day,r_month,r_year;
	
	string re_name,re_bname,re_aname;
	int re_bid;
	int re_day,re_month,re_year,re_hour,re_min,re_sec;
	int count;

	string re_name1,re_bid1,re_bname1,re_aname1;
	int re_day1,re_month1,re_year1,re_hour1,re_min1,re_sec1;
	int count1; 
	string text;

	time_t ttime = time(0);
	tm *local_time = localtime(&ttime);
	tm *ltm = localtime(&ttime);
	day=local_time->tm_mday;
	month= 1 + local_time->tm_mon;
	year=2443 + local_time->tm_year;
	hour = ltm->tm_hour;
	min = ltm->tm_min;
	sec = ltm->tm_sec;
	file.open(name+"_show_borrow.txt",ios::in);
	file1.open(name+"_return_book.txt",ios::out | ios::app);
	file2.open(name+"_return_book.txt",ios::in);

	if(!file)
	{
		cout << "\n\nFile Opening Error!";
	}else{
		cout << "\n\nList Borrow Book ID : ";
		cin >> List_id;
		
		file >> count >> re_name;
		file >> re_bid >> re_bname;
		file >> re_aname >> re_day;
		file >> re_month >> re_year;
		file >> re_hour >> re_min;
		file >> re_sec;

		file2 >> count1 >> re_name1;
		file2 >> re_bid1 >> re_bname1;
		file2 >> re_aname1 >> re_day1;
		file2 >> re_month1 >> re_year1;
		file2 >> re_hour1 >> re_min1;
		file2 >> re_sec1 >> text;
		while (!file.eof())
		{
			if (List_id == count && count1 != count)
			{
				file1<< " " <<  count << " "
					<< re_name << " " 
					<< re_bid << " "
					<< re_bname << " "
					<< re_aname << " "
					<< day << " "
					<< month << " "
					<< year << " "
					<< hour << " "
					<< min << " "
					<< sec << " " 
					<< "ReturnSucessful"
					<< "\n\n";
				cout<<"\nReturn book Sucessful\n\n";
				break;	
				
						
			}
			if(List_id == count&&count1 == count){
					cout<< "\nThis book has been returned.";
					break;	
			}
			
			file >> count >> re_name;
			file >> re_bid >> re_bname;
			file >> re_aname >> re_day;
			file >> re_month >> re_year;
			file >> re_hour >> re_min;
			file >> re_sec;
			
			file2 >> count1 >> re_name1;
			file2 >> re_bid1 >> re_bname1;
			file2 >> re_aname1 >> re_day1;
			file2 >> re_month1 >> re_year1;
			file2 >> re_hour1 >> re_min1;
			file2 >> re_sec1 >> text;

		}
		file.close();
		file1.close();
		file2.close();
	}
	
	
}

void show_book_all(){
	system("cls");
	fstream file;
	int no_copy;
	string b_name, b_id, a_name,b_status;
	cout << "\n\n\t\t\t\t\tAll BOOKS";

	// Open the file in input mode
	file.open("book.txt", ios::in);
	if (!file)
		cout << "\n\nFile Opening Error!";
	else {

		cout << "\n\n\nBook ID\t\tBook"
			 << "\t\tAuthor\t\tNo. of "
				"Books\t\tStatus\n\n";
		file >> b_id >> b_name;
		file >> a_name >> no_copy;
    	file >> b_status;

		// Till end of file is reached
		while (!file.eof()) {
			cout << " " << b_id
				<< "\t\t" << b_name
				<< "\t\t" << a_name
				<< "\t\t" << no_copy
        		<< "\t\t\t" << b_status
				<< "\n\n";
			file >> b_id >> b_name;
			file >> a_name >> no_copy;
      		file >> b_status;
		}

		// Close the file
		file.close();
	}

}

void show_borrow_book(string name){
	system( "cls" );
	fstream file;
	string re_name,re_bid,re_bname,re_aname;
	int re_day,re_month,re_year,re_hour,re_min,re_sec;
	int count;
	
	cout << "\n\n\t\t\t\t\tAll BOOKS IS BORROW";

	file.open(name+"_show_borrow.txt", ios::in);
	if (!file)
		cout << "\n\nFile Opening Error!";
	else {

		cout << "\n\n\nLIST\t\tname\t\tBook ID\t\tBook"
			 << "\t\tAuthor\t\t   Date\t\t  TIME"
				"\n\n";
		file >> count >> re_name;
		file >> re_bid >> re_bname;
		file >> re_aname >> re_day;
		file >> re_month >> re_year;
		file >> re_hour >> re_min;
		file >> re_sec;
		
		// Till end of file is reached
		while (!file.eof()) {
			cout << " " << count
				<< "\t\t" << re_name
				<< "\t\t" << re_bid
				<< "\t\t" << re_bname
				<< "\t\t" << re_aname
				<< "\t\t" << re_day <<"/"
				<< re_month <<"/"<< re_year
				<< "\t" << re_hour << ":" 
				<< re_min << ":" << re_sec
				<< "\n\n";

			file >> count >> re_name;
			file >> re_bid >> re_bname;
			file >> re_aname >> re_day;
			file >> re_month >> re_year;
			file >> re_hour >> re_min;
			file >> re_sec;
		}
		system( "pause" );
		// Close the file
		file.close();
	}

}

void show_borrow_book1(string name){
	system( "cls" );
	fstream file;
	string re_name,re_bid,re_bname,re_aname;
	int re_day,re_month,re_year,re_hour,re_min,re_sec;
	int count;
	
	cout << "\n\n\t\t\t\t\tAll BOOKS IS BORROW";

	file.open(name+"_show_borrow.txt", ios::in);
	if (!file)
		cout << "\n\nFile Opening Error!";
	else {

		cout << "\n\n\nLIST\t\tname\t\tBook ID\t\tBook"
			 << "\t\tAuthor\t\t   Date\t\t  TIME"
				"\n\n";
		file >> count >> re_name;
		file >> re_bid >> re_bname;
		file >> re_aname >> re_day;
		file >> re_month >> re_year;
		file >> re_hour >> re_min;
		file >> re_sec;
		
		// Till end of file is reached
		while (!file.eof()) {
			cout << " " << count
				<< "\t\t" << re_name
				<< "\t\t" << re_bid
				<< "\t\t" << re_bname
				<< "\t\t" << re_aname
				<< "\t\t" << re_day <<"/"
				<< re_month <<"/"<< re_year
				<< "\t" << re_hour << ":" 
				<< re_min << ":" << re_sec
				<< "\n\n";

			file >> count >> re_name;
			file >> re_bid >> re_bname;
			file >> re_aname >> re_day;
			file >> re_month >> re_year;
			file >> re_hour >> re_min;
			file >> re_sec;
		}
		
		// Close the file
		file.close();
	}
}

void show_return_book(string name){
	system( "cls" );
	fstream file;
	string re_name,re_bid,re_bname,re_aname;
	int re_day,re_month,re_year,re_hour,re_min,re_sec;
	int count;
	string text;
	cout << "\n\n\t\t\t\t\tAll BOOKS IS BORROW";

	file.open(name+"_return_book.txt", ios::in);
	if (!file)
		cout << "\n\nFile Opening Error!";
	else {

		cout << "\n\n\nLIST\t\tNAME\t\tBook ID\t\tBook"
			 << "\t\tAuthor\t\t   Date\t\t  TIME\t\t   Status"
				"\n\n";
		file >> count >> re_name;
		file >> re_bid >> re_bname;
		file >> re_aname >> re_day;
		file >> re_month >> re_year;
		file >> re_hour >> re_min;
		file >> re_sec >> text;
		
		// Till end of file is reached
		while (!file.eof()) {
			cout << " " << count
				<< "\t\t" << re_name
				<< "\t\t" << re_bid
				<< "\t\t" << re_bname
				<< "\t\t" << re_aname
				<< "\t\t" << re_day <<"/"
				<< re_month <<"/"<< re_year
				<< "\t" << re_hour << ":" 
				<< re_min << ":" << re_sec
				<< "\t" << text
				<< "\n\n";

			file >> count >> re_name;
			file >> re_bid >> re_bname;
			file >> re_aname >> re_day;
			file >> re_month >> re_year;
			file >> re_hour >> re_min;
			file >> re_sec >> text;
			
		}
		system( "pause" );
		// Close the file
		file.close();
	}

}

void show_all_user(){
	system( "cls" );
	fstream file;
	string user , pass ,birthday , name , surname;
	
	cout << "\n\n\t\t\t\t\tAll USER ";

	file.open("user_from.txt", ios::in);
	if (!file)
		cout << "\n\nFile Opening Error!";
	else {

		cout << "\n\n\nUSER\t\tPASS\t\tNAME\t\tSURNAME\t\tBIRTHDAY"
			 << "\n\n";
		file >> user >> pass >> name >> surname >> birthday;
		// Till end of file is reached
		while (!file.eof()) {
			cout << " " << user
				<< "\t\t" << pass
				<< "\t\t" << name
				<< "\t\t" << surname
				<< "\t\t" <<birthday
				<< "\n\n";

			file >> user >> pass >> name >> surname >> birthday;
		}
		system( "pause" );
		// Close the file
		file.close();

	}

}

void menu_update(){
	int choice;
	char x;
	
	while (1) {
		system("cls");
		cout << "\n\n\t\t\t\tUPDATE MENU";
		cout << "\n\n1. UPDATE BOOK ";
		cout << "\n2. UPDATE BOOK STATUS";
		cout << "\n3. UPDATE BOOK STOCK";
		cout << "\n4. ADMIN MENU";
			cout << "\nEnter your choice : ";
		cin >> choice;
		switch (choice) {

		case 1:
			update_book();
			break;

		case 2:
			update_status_book();
			break;
		case 3:
			update_stock_book();
		case 4:
			bookShopRecord();
			break;
		default:
			cout << "\n\nINVALID CHOICE\n";
		}
	}
	                    
}

void update_status_book()
{
	system("cls");
	fstream file, file1;
	int no_copy, no_co, count = 0;
	string b_name, b_na, a_name,b_status;
	string a_na, b_idd, b_id,b_st;

	cout << "\n\n\t\t\t\tUpdate Book Record";
	file1.open("book1.txt",
		ios::app | ios::out);
	file.open("book.txt", ios::in);

	if (!file)
		cout << "\n\nFile Opening Error!";
	else {

		cout << "\n\nBook ID : ";
		cin >> b_id;
		file >> b_idd >> b_name;
		file >> a_name >> no_copy;
    	file >> b_status;

		// Till end of file is reached
		while (!file.eof()) {
			if (b_id == b_idd) {
				system("cls");
				cout << "\t\t\t\t"
					 << "Update Book Record";
				cout << "\nBook Status : ";
				cin >> b_st;
				file1 << " " << b_idd << " "
					<< b_name << " "
					<< a_name << " " << no_copy
          			<< " " << b_st
					<< "\n\n";
				count++;
			}
			else
				file1 << " " << b_idd
					<< " " << b_name
					<< " " << a_name
					<< " " << no_copy
          			<< " " << b_status
					<< "\n\n";
			file >> b_idd >> b_name;
			file >> a_name >> no_copy;
      		file >> b_status;
		}
		if (count == 0)
			cout << "\n\nBook ID"
				<< " Not Found...";
	}
	cout << endl;
	system("pause");

	// Close the files
	file.close();
	file1.close();
	remove("book.txt");
	rename("book1.txt",
		   "book.txt");

}

void update_stock_book()
{
	system("cls");
	fstream file, file1;
	int no_copy, no_co, count = 0;
	string b_name, b_na, a_name,b_status;
	string a_na, b_idd, b_id,b_st;

	cout << "\n\n\t\t\t\tUpdate Book Record";
	file1.open("book1.txt",
		ios::app | ios::out);
	file.open("book.txt", ios::in);

	if (!file)
		cout << "\n\nFile Opening Error!";
	else {

		cout << "\n\nBook ID : ";
		cin >> b_id;
		file >> b_idd >> b_name;
		file >> a_name >> no_copy;
    	file >> b_status;

		// Till end of file is reached
		while (!file.eof()) {
			if (b_id == b_idd) {
				system("cls");
				cout << "\t\t\t\t"
					 << "Update Book Record";
				cout << "\nNo. of Books : ";
				cin >> no_co;
				file1 << " " << b_idd << " "
					<< b_name << " "
					<< a_name << " " << no_co
          			<< " " << b_status
					<< "\n\n";
				count++;
			}
			else
				file1 << " " << b_idd
					<< " " << b_name
					<< " " << a_name
					<< " " << no_copy
          			<< " " << b_status
					<< "\n\n";
			file >> b_idd >> b_name;
			file >> a_name >> no_copy;
      		file >> b_status;
		}
		if (count == 0)
			cout << "\n\nBook ID"
				<< " Not Found...";
	}
	cout << endl;
	system("pause");

	// Close the files
	file.close();
	file1.close();
	remove("book.txt");
	rename("book1.txt",
		   "book.txt");
}