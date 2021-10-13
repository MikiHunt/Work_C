#include<iostream>
using namespace std;
int main (){
	char ch;
	cout<<"\nEnter a character : ";
	cin>>ch;
	cout<<endl;
	char text;
	do{
		system ("CLS");
		if(ch>='a'&&ch<='z'){
			cout<<ch<<" is lower character."<<endl<<ch<<" ASCII Code : "<<int(ch);
		}else if(ch>='A'&&ch<='Z'){
			cout<<ch<<" is upper character."<<endl<<ch<<" ASCII Code : "<<int(ch);
		}else if(ch>='0'&&ch<='9'){
			cout<<ch<<" is numeic."<<endl<<ch<<" ASCII Code : "<<int(ch);
		}else cout<<ch<<" is special character."<<endl<<ch<<" ASCII Code : "<<int(ch);
		cout<<"\n\ndo it again? y or n : ";
		cin>>text;
		
	}while(text == 'y'||text=='Y');
	return 0;
}
