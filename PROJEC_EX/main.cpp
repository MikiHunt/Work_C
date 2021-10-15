#include<iostream>
#include<istream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
using namespace std;

void menu();
void login();
void registr();
void borrow_books_menu();
void admin_login();
void cr_book();
void add_book();

int main(){
    menu();

    return 0;
}
void menu(){
    int choice;
    cout<<"1.LOGIN\n";
    cout<<"2.REGISTER\n";
    cout<<"3.Admin\n";
    cout<<"4.EXIT\n";
    cout<<"\nEnter your choice : ";
    cin>>choice;
    switch(choice)
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
            system("cls");
            cout<<"Wrong Choice Intered\n"<<endl;
            main();
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

        ifstream input("database.txt");
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
            cout<<"\nHello "<<user<<"\nLOGIN SUCESS\nWe're glad that you're here.\nThanks for logging in\n";
            borrow_books_menu();
            
        }
        else
        {
            cout<<"\nLOGIN ERROR\nPlease check your username and password\n";
            main();
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

    ofstream reg("database.txt",ios::app);
    reg<<reguser<<' '<<regpass<<endl;
    system("cls");
    cout<<"\nRegistration Sucessful\n\n";
    main();
}
void borrow_books_menu(){
    int choice;
    cout<<"1.Borrow books\n";
    cout<<"2.Return the book\n";
    cout<<"3.EXIT\n";
    cout<<"\nEnter your choice : ";
    cin>>choice;
    switch(choice)
    {
        case 1:
            
            break;
        case 2:
            
            break;
        case 3:
            
            break;
        case 4:
        break;
        default:
            system("cls");
            cout<<"Wrong Choice Intered\n"<<endl;
            main();
        }
}
void admin_login()
{
        int count=0;
        string user,pass,u,p;
        system("cls");
        cout<<"please enter the following details"<<endl;
        cout<<"USERNAME :";
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
            add_book();
            
        }
        else
        {
            cout<<"\nLOGIN ERROR\nPlease check your username and password\n";
            main();
        }
}
void add_book(){
    int choice;
    cout<<"1.Add books\n";
    cout<<"2.Delete book\n";
    cout<<"3.EXIT\n";
    cout<<"\nEnter your choice : ";
    cin>>choice;
    switch(choice)
    {
        case 1:
            cr_book();
            break;
        case 2:
            
            break;
        case 3:
            
            break;
        case 4:
        break;
        default:
            system("cls");
            cout<<"Wrong Choice Intered\n"<<endl;
            main();
        }

}
void cr_book(){
    string regbook,regquan,restatus;

    system("cls");
    cout<<"Add book name :";
    cin>>regbook;
    cout<<"\nAdd quantity :";
    cin>>regquan;
    cout<<"\nAdd status  :";
    cin>>restatus;
    ofstream regb("database_book.txt",ios::app);
    regb<<regbook<<" "<<regquan<<" "<<restatus<<endl;
    system("cls");
    cout<<"\nRegistration Sucessful\n";

}