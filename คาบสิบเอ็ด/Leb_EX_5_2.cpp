#include<iostream>
using namespace std;
void test(int num);
int main(){
	
	int num1,num2,num3,num4,num5;
	cout<<"Enter five number : ";
	cin>>num1;cin>>num2;cin>>num3;cin>>num4;cin>>num5;
	test(num1);
	test(num2);
	test(num3);
	test(num4);
	test(num5);
	return 0;
}
void test(int num){
	cout<<num<<" : ";
	for(int i=1;i<=num;i++){
		cout<<"*";
	}
	cout<<endl;
	
}
