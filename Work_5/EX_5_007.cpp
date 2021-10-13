#include <iostream>
#include <string>
using namespace std;
int main (){
	char text;
	
	int Nuumber;
	do{
		cout<<"Enter your number : ";
		cin>>Nuumber;
		if(Nuumber>0)
			cout<<"\nNumber is positive";
		else if(Nuumber==0)
			cout<<"\nNumber is zero";
		else{
			cout<<"\nNumber is negative";
		}
		cout<<"\n\ndo it again? y or n : ";
		cin>>text;
		system ("CLS");
	}while(text == 'y'||text=='Y');
	return 0;
}
