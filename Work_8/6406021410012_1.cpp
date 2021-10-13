#include<iostream>
using namespace std;
int main (){
	int leap_year;
	char i;
	do{
	cout<<"Please enter year : ";
	cin >>leap_year;
	if(((leap_year%100)==0)&&((leap_year%400)==0)){
			cout<<"Year "<<leap_year<<" is a leap year.";
	}else if(((leap_year%4)==0)&&((leap_year%100)!=0)){
			cout<<"Year "<<leap_year<<" is a leap year.";
	}else {
		cout<<"Year "<<leap_year<<"is not a leap year.";
	}
	cout<<"\ndo it again? y or n : ";
	cin>>i;
	system ("CLS");
}while(i =='y'||i=='Y');
	return 0;
}
