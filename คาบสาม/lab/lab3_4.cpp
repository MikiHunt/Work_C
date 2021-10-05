#include <iostream>
#include <stdlib.h>
#include <cstdlib>
using namespace std;
int main(){
		char text;
	do{
		
		system ("CLS");
		int A, B;
		cout<<endl;
		cout << " Enter first number(A) : ";
		cin >> A;
		cout << " Enter second number(B) : ";
		cin >> B;
		cout << endl;
		cout << " Before A = " << A << endl;
		cout << " ++A = " << ++A << endl;
		cout << " After A = " << A << endl;
		cout << " Before A = " << A << endl;
		cout << " A++ = " << A++ << endl;
		cout << " After A = " << A << endl << endl;
		cout << " Before B = " << B << endl;
		cout << " --B = " << --B << endl;
		cout << " After B = " << B << endl;
		cout << " Before B = " << B << endl;
		cout << " B-- = " << B-- << endl;
		cout << " After B = " << B << endl;
		cout<<"\ndo it again? y or n : ";
		cin>>text;
		cout<<endl;
	
}while(text == 'y'||text=='Y');
	return 0;
}


