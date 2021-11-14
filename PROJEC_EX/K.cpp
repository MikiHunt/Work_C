
#include <iostream>
#include <string>
 
using namespace std;
void askForSecretPassword(void){
	string password;
	cout<<"Enter your password: ";
	cin>>password;
	int len=password.length();
	system("cls");
	cout<<"Enter numeric password: ";
	for(int i=0;i<len;i++){
		cout<<"*";
	}cout<<endl;
}
int main(){
 
	askForSecretPassword();
	system("pause");
    return 0;
}