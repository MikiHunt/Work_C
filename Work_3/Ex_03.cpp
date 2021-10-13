#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int base,high,right_triangle;
	cout<<"Enter your base : ";
	cin>>base;
	cout<<"Enter your high : ";
	cin>>high;
	right_triangle=(high*base)/2;
	cout<<endl<<right_triangle<<endl<<endl;
	//-------------------------------------
	int o ,sum;
	float avg;
	for(int i=1;i<=5;i++){
		cout<<"Enter your number : ";
		cin>>o;
		sum = o +sum;
	}
	avg=sum/5;
	cout<<endl<<"Avg : "<<avg<<"\nSum : "<<sum<<endl<<endl;
	//-------------------------------------
	int Year,era;
	cout<<"Enter your year : ";
	cin>>Year;
	era=Year-543;
	cout<<endl<<"Year era : "<<era<<endl<<endl;
	//-------------------------------------
	int price,discount;
	cout<<"Enter your price : ";
	cin>>price;
	cout<<"Enter your discount : ";
	cin>>discount;
	sum = (price/100)*discount;
	sum = price-sum;
	cout<<endl<<"discount is "<<discount<<"%"<<" totol : "<<sum<<endl;
	//-------------------------------------
	return 0;
}
