#include <iostream>
using namespace std;

void last_digit(int number1){
	int mod_num;
	mod_num=number1%10;
	switch(mod_num){
		case 0:
			cout<<"Zero";
			break;
		case 1:
			cout<<"One";
			break;
		case 2:
			cout<<"Two";
			break;
		case 3:
			cout<<"Three";
			break;
		case 4:
			cout<<"Four";
			break;	
		case 5:
			cout<<"Five";
			break;	
		case 6:
			cout<<"Six";
			break;	
		case 7:
			cout<<"Sevenb";
			break;	
		case 8:
			cout<<"Eight";
			break;	
		case 9:
			cout<<"Nine";
			break;
	}
}
