#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <ctime>

using namespace std;

void main_menu();
void login();
void admin_login();
void control_panel();
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
void return_books();
void check_borrow_book();
void show_book_all();
void show_borrow_book(string name);

int main () 
{
	main_menu();
	return 0;
}

void main_menu()
{
	int choice;
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
  	string user,pass,u,p;
  	system("cls");
  	cout<<"please enter the following details"<<endl;
  	cout<<"USERNAME :";
  	cin>>user;
  	cout<<"PASSWORD :";
  	cin>>pass;

  	ifstream input("user_from.txt");
  	while(input>>u>>p)
  	{
    	if(u==user && p==pass)
    	{
      		count=1;
      		system("cls");
    	}
  	}
	input.close();
  	if(count==1)
  	{
    	cout<<"\nHello "<<user<<"\nLOGIN SUCESS\n";  
		book_borrowed_menu(user);
  	}
  	else
  	{
    	cout<<"\nLOGIN ERROR\nPlease check your username and password\n";
    	main();
  	}
}

void admin_login()
{
  	int count=0;
  	string user,pass,u,p;
  	system("cls");
  	cout<<"please enter the following details"<<endl;
  	cout<<"ADMINNAME :";
  	cin>>user;
  	cout<<"PASSWORD :";
  	cin>>pass;

  	ifstream input("admin.txt");
  	while(input>>u>>p)
  	{
    	if(u==user && p==pass)
    	{
      		count=1;
      		system("cls");
    	}
  	}
  	input.close();
  	if(count==1)
  	{
		cout<<"\nHello "<<user<<"\nLOGIN SUCESS\n"; 
    	bookShopRecord();  
  	}
  	else
  	{
    	cout<<"\nLOGIN ERROR\nPlease check your adminname and password\n";
    	main();
  	}
}

void control_panel()
{
	system("cls");
	cout << "\n\n\t\t\t\tADMIN MENU";
	cout << "\n\n1. ADD BOOK";
	cout << "\n2. DISPLAY BOOKS";
	cout << "\n3. CHECK PARTICULAR BOOK";
	cout << "\n4. UPDATE BOOK";
	cout << "\n5. DELETE BOOK";
	cout << "\n6. EXIT";
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
    	<< " " << b_status << "\n";
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

		system("pause");

		// Close the file
		file.close();
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
    control_panel();
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
			update_book();
			break;

		case 5:
			del_book();
			break;

		case 6:
			exit(0);
			break;

		default:
			cout << "\n\nINVALID CHOICE\n";
		}
	}
}

void registr()
{

    string reguser,regpass,ru,rp;
    system("cls");
    
    cout<<"Enter the username :";
    cin>>reguser;
    cout<<"\nEnter the password :";
    cin>>regpass;

    ofstream reg("user_from.txt",ios::app);
    reg<<reguser<<' '<<regpass<<endl;
    system("cls");
    cout<<"\nRegistration Sucessful\n\n";
    main();
}

void user_menu()
{

	system("cls");
	cout << "\n\n\t\t\t\tUSER MENU";
	cout << "\n\n1. BORROW BOOKS";
	cout << "\n2. RETURN BOOKS";
	cout << "\n3. SHOW BORROW BOOKS";
	cout << "\n4. UPDATE BOOK";
	cout << "\n5. DELETE BOOK";
	cout << "\n6. EXIT";
}

void book_borrowed_menu(string name)
{
	int choice;
	char x;
	while (1) {
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
			return_books();
			break;

		case 3:
			show_borrow_book(name);
			break;
		case 4:
			update_book();
			break;

		case 5:
			del_book();
			break;

		case 6:
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
	fstream file,file1;
	int no_copy;
	string b_id, b_name, a_name, b_idd,b_status;
	string trem;
	int day,month,year;

	time_t ttime = time(0);
	tm *local_time = localtime(&ttime);
	day=local_time->tm_mday;
	month=1 + local_time->tm_mon;
	year=2443 + local_time->tm_year;

	// Open the file in input mode
	file.open("book.txt", ios::in);
	file1.open(trem=name+".txt",
			ios::out | ios::app);

	if (!file)
		cout << "\n\nFile Opening Error!";
	else {

		cout << "\n\nBook ID : ";
		cin >> b_id;
		file >> b_idd >> b_name;
		file >> a_name >> no_copy;
    	file >> b_status;
		while (!file.eof()) {
			if (b_id == b_idd) {
				if(b_status=="Y")
				{
					file1 << " " << name << " " 
					<< b_id << " "<< b_name 
					<< " " << a_name
					<< " " << day <<" /"
					<< month << " /"
					<< year << "\n\n";
					cout<<"\nBorrowed Sucessful\n\n";
					break;
				}
			}else
			{
				cout << "\nHaven't put it on the bookshelf yet.";
				break;
			}
			
		}
	}
	file.close();
	file1.close();

}
 
void return_books()
{


}

void check_borrow_book(){



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
	system("cls");
	fstream file;
	int no_copy;
	string b_name, b_id, a_name,b_status;
	string trem;
	string day,month,year;
	cout << "\n\n\t\t\t\t\tAll BOOKS IS BORROW";

	file.open(trem=name+".txt", ios::in);
	if (!file)
		cout << "\n\nFile Opening Error!";
	else {

		cout << "\n\n\nname\t\tBook ID\t\tBook"
			 << "\t\tAuthor\t\t   Date"
				"\n\n";
		file >> name >> b_id >> b_name;
		file >> a_name >> day ;
		file >> month  >> year;
		// Till end of file is reached
		while (!file.eof()) {
			cout << " " << name
				<< "\t\t" << b_id
				<< "\t\t" << b_name
				<< "\t\t" << a_name
				<< "\t\t" << day
				<< month << year
				<< "\n\n";

			file >> name >> b_id >> b_name;
			file >> a_name >> day;
			file >> month >> year;
		}
		system("pause");
		// Close the file
		file.close();
	}

}