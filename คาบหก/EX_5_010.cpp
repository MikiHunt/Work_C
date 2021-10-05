#include <iostream>
using namespace std;

int main (){
	int number,sum;
	cout<<"Enter a number : ";
	cin>>number;
	for(int i=0 ;i<=number;i++){
		if((i%2)==0){
			sum=sum+i;
			cout<<"even number : "<<i<<endl;
		}
	}
	cout<<"grand total : "<<sum;
	return 0;
}

