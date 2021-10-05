#include<iostream>
using namespace std;
int main(){
	int year;
	cout<<"\nEnter year : ";
	cin>>year;

		system ("CLS");
		if((year/4)==0){
			cout<<"In "<<year<<" is leap year";

		}else{
			cout<<"In "<<year <<" is not leap year";

		}

	
	return 0;
}
