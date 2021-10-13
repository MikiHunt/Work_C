#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int number,sum;
	cout<<"Number : ";
	cin>>number;
	sum=number%2;
	if(number<=1000&&sum==0&&number>=-1000){
		cout<<number;
		cout<<endl;
		cout<<sum;
	}else{
		cout<<"out rule : "<<number;
	
	}
	return 0;
}
