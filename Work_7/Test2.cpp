#include<iostream>
#include<string>
using namespace std;
int main(){
	int n; 
	string str;
	do{
		cout <<"Enter your number : ";
		cin>>n;
		if((n==1 || n%2 == 0 || n%3 == 0 || n%5==0 || n%7==0) 
       		&& (n!=2 && n!=3 && n!=5 && n!=7)){
       	 		cout<<"NPrime";
        
   		}else{
    		cout<<"Prnme";
		}
		cout<<"\n\nEnter std ExitProgram null : ";
		cin>>str;
		system ("CLS");
	}while(str !="n");
		
	
 	return 0;   
}
