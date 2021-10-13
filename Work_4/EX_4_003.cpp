#include<iostream>
using namespace std ;
int main(){
	int number1;
	char text;
	do{
		
		system ("CLS");
		cout<<"Enter your number : ";
		cin>>number1;
		if(number1>=50){
			cout<<"You Pass 0_0";
		}else{
			cout<<"You Fail T_T";
		}
		
		cout<<"\n\ndo it again? y or n : ";
		cin>>text;
		
	}while(text == 'y'||text=='Y');
	
	return 0 ;
}
