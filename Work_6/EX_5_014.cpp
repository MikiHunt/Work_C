#include <iostream>
using namespace std;

int main (){
	int n,x[10],min=0,max=0,sum;
	float avg;
	cout<<"Enter a number : ";
	cin >>n;
	n=n-1;
	for(int i=0;i<=n;i++){
		
		cout<<"Enter a number Min And Max : ";
		cin>>x[i];
		min=x[i];
		sum=sum+min;
	}
	for(int j=0;j<=n;j++){
		
			if(min>x[j]){
				min=x[j];
				
			}else if(max<x[j]){
				max=x[j];
			}else{
			}	
		}
	avg=float(sum)/(n+1);
	cout<<"Max : "<<max<<endl;
	cout<<"Min : "<<min<<endl;
	cout<<"Mean : "<<avg;
	return 0;
}

