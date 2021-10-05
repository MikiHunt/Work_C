#include <iostream>
using namespace std;
int main(){
	char ch;
	char text;
	do{
		
		cout<<"\nEnter a character : ";
		cin>>ch;
		cout<<endl;
		if(ch>='0'&&ch<='9'){
			cout<<ch<<" is Number."<<endl<<endl<<ch<<" ASCII Code : "<<int(ch);
		}else cout<<ch<<" is Not  Number.";
		cout<<"\n\ndo it again? y or n : ";
		cin>>text;
		system ("CLS");
	}while(text == 'y'||text=='Y');
}
