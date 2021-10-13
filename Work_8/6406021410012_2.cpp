#include<iostream>
#include "sum_in.cpp"
using namespace std;
int main (){
	//cout<<sum<<" "<<1000+((10000*5)/100);
	int book,toys,model,stationery;
	
	char i;
	do{
	cout<<"Input number of Books : ";
	cin>>book;
	cout<<"Input number of toys : ";
	cin>>toys;
	cout<<"Input number of model : ";
	cin>>model;
	cout<<"Input number of stationery : ";
	cin>>stationery;
	sum2(book,toys,model,stationery);
	cout<<"\n\ndo it again? y or n : ";
	cin>>i;
	system ("CLS");
}while(i =='y'||i=='Y');
	return 0;
}



