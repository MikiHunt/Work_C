#include <iostream>
using namespace std;
int main(){
	int sum,n,Prime=0,i; 
	cout <<"Enter your number : ";
	cin>>n;
	for( i=2;i<=n;i++){
		for(int j=2;j<=i;j++){
			if(j%1==0){
				if(i%j==0){
					Prime = Prime+ 1;
				}
			}
		}
		if(Prime != 0){
			sum =sum + i;
			cout<<i<<" ^ "<<i<<" = "<<i*i<<endl;
		}
		Prime=0;
	}
	cout<<sum<<endl;
	return 0;
}
