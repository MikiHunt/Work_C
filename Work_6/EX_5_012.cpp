#include <iostream>
using namespace std;

int main (){
	int number,sum;
	cout<<"Enter a number : ";
	cin>>number;
	for(int i=number ;i>0;i--){
		sum=sum+i;
		cout<<"Number is : "<<i<<endl;
	}
	cout<<"grand total : "<<sum;
	return 0;
}

