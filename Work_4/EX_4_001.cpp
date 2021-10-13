#include <iostream>
using namespace std;
int main(){
	int A,B;
	char text;
	do{
		system ("CLS");
		cout<<"Enter value A and B : ";
		cin >> A>> B;
		if(A==B){
			cout<<"A : "<<A <<"and B : "<<B<<" values are equal"<<endl;
		}
		if(A>B){
			cout<<"A : "<<A <<" values > values B : "<<B <<endl;
		}
		if(A<B){
			cout<<"A : "<<A <<" values < values B : "<<B <<endl;
		}
		cout<<"\n\ndo it again? y or n : ";
		cin>>text;
}while(text == 'y'||text=='Y');
	return 0;
}
