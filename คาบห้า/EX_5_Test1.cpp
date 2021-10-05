#include <iostream>
#include <string>
using namespace std;
int main (){
	char text;
	string Name_Str[13];
	string str;
	int Nuumber,sum=0;
	do{

		for(int i=0;i<3;i++){
			cout<<"Enter your name : ";
			cin>>str;
			cout<<endl;
			Name_Str[i]=str;
		}
		for(int i=0;i<3;i++){
			cout<<"Name is : "<<Name_Str[i]<<endl;
		}
		cout<<"\ndo it again? y or n : ";
		cin>>text;
		
		system ("CLS");
	}while(text == 'y'||text=='Y');
	return 0;
}
