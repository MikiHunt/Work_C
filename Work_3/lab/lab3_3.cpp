#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	char text;
	do{
		system ("CLS");
		int A, B;
		cout << "Enter first number(A) : ";
		cin >> A;
		cout << "Enter second number(B) : ";
		cin >> B;
		cout << "\nTesting usage operator\n";
		cout << "======================\n";
		cout << " A < B = " << (A < B) << endl;
		cout << " A <= B = " << (A <= B) << endl;
		cout << " A > B = " << (A > B) << endl;
		cout << " A >= B = " << (A >= B) << endl;
		cout << " A == B = " << (A == B) << endl;
		cout << " A != B = " << (A != B) << endl;
		cout << " A && B = " << (A && B) << endl;
		cout << " A || B = " << (A || B) << endl;
		cout << "!A = " << !A << ", !B = " << !B << endl;
		cout<<"\ndo it again? y or n : ";
		cin>>text;
		cout<<endl;
}while(text == 'y'||text=='Y');
return (0);
}
