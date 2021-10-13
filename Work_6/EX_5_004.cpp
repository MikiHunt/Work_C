#include <iostream>
using namespace std;
int main(){
	int number1,number2,min=0,max=0;
	
	cout<<"Enter your number 1 : ";
	cin>>number1;
	cout<<"Enter your number 2 : ";
	cin>>number2;
	if(number1>number2){
		max=number1;
		min=number2;
	}else
	if(number2>number1){
		max=number2;
		min=number1;
	}
	cout<<"Number Max : "<<max<<endl<<"Number Min : "<<min;
	
	
	return 0;
}
