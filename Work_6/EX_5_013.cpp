#include <iostream>
using namespace std;

int main (){
	int n,x;
	cout<<"Enter a student number : ";
	cin >>n;
	for(int i=1;i<=n;i++){
		cout<<"Enter a student"<<"["<<i<<"]"<<" score : ";
		cin>>x;
		if(80<=x&&x<=100){
		cout<<"Grade G  GOOD"<<endl;
		}
		if(50<=x&&x<80){
		cout<<"Grade p  Pass"<<endl;
		}
		if(0<=x&&x<50){
		cout<<"Grade F  Fail"<<endl;
		}
	}
	return 0;
}

