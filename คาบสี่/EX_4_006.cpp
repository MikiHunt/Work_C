#include <iostream>
#include <string.h>

using namespace std;
int main(){
	
	char p;
	cout<<"Enter the word : ";
	cin>>p;
	char o[p];
	
	int length = sizeof(o) / sizeof(char);
    cout<<"String length is: "<<length ;
    for (int i = 0; i < length; i++) {
        cout <<"name : "<<o[i];
    }


}
