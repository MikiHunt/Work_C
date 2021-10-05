#include <iostream>
using namespace std;
int main (){
	int kilo,price=0;
	
	cout<<"Enter the kilo : ";
	cin>>kilo;
	if(kilo>=0&&kilo<=1){
		price = 40;
		
	}else if(kilo>=2&&kilo<=10){
		price=40+((kilo-1)*5);
		
	}else if(kilo>=11&&kilo<=15){
		price=85+((kilo-10)*4);
		
	}else if(kilo>=16&&kilo<=20){
		price=105+((kilo-15)*3);
		
	}else if(kilo>=21){
		price=120+((kilo-20)*2);
	}
	cout<<"price : "<<price;
	return 0;
}
