#include <iostream>
using namespace std;
int main(){
	int age;
	cout<<"Enter your Age : ";
	cin>>age;
	if(age <=10)
	cout<<"Children";
	else if(age<=20)
	cout<<"Teenage";
	else if(age<=35)
	cout<<"Adult";
	else if(age<=55)
	cout<<"Middle age";
	else {
		cout<<"Old age";
	}
	return 0;
}
