#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int sum,n,prime=1,j,x,i; 
	cout <<"Enter your number1 : ";
	cin>>x;
	cout <<"Enter your number2 : ";
	cin>>n;
	for(i=x;i<=n;i++){
		for(j=2;j<=i;j++){
			if(i%j==0){
				break;
			}
		}
		if(i == j){
			//cout<<i<<endl;
			sum= sum+(i*i);
			cout<<i<<" ^ "<<i<<" = "<<i*i<<endl;
		}
	}
	cout<<"\n\nnot a prime number = "<<sum;
	return 0;
}
