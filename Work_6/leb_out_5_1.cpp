#include <iostream>
using namespace std;
int main ()
{
    double income = 0 , tax = 0 ;

    cout << "Enter your income : ";cin >> income;

    if ( income < 100000 )
    {
        tax = income + (( income * 5 ) / 100 ); 
        cout << "income : " << income << "\t\ttax 5% : " << ( income * 5 ) / 100; 
        cout << "\tSum tax : " << tax;   
    }else if (income >= 100001 && income <= 500000 )
    {
        tax = income + (( income * 10 ) / 100 ); 
        cout << "income : " << income << "\t\ttax 10% : " << ( income * 10 ) / 100; 
        cout << "\tSum tax : " << tax;     
    }else if ( income <= 500001 && income <= 1000000 )
    {
        tax = income + (( income * 20 ) / 100 ); 
        cout << "income : " << income << "\t\ttax 20% : " << ( income * 20 ) / 100; 
        cout << "\tSum tax : " << tax;   
    }else if ( income <= 1000001 && income <= 4000000 )
    {
        tax = income + (( income * 30 ) / 100 ); 
        cout << "income : " << income << "\t\ttax 30% : " << ( income * 30 ) / 100; 
        cout << "\tSum tax : " << tax;    
    }else 
    {
        tax = income + (( income * 37 ) / 100 ); 
        cout << "income : " << income << "\t\ttax 37% : " << ( income * 37 ) / 100; 
        cout << "\tSum tax : " << tax; 
    }
    

    return 0;
}