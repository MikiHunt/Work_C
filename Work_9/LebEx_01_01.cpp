#include <iostream>
using namespace std;
int main (){
	int score;
	cout<<"Enter the number of your score : ";
	cin>>score;
	if(sum>=80){
		cout<<"A";
	}else if(sum >=70){
		cout<<"B";
	}else if(sum >=60){
		cout<<"C";
	}else if(sum >=50){
		cout<<"D";
	}else if(sum <50){
		cout<<"F";
	}
	return 0;
}
