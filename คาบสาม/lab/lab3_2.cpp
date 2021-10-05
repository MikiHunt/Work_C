#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	char text;
	do{
		system ("CLS");
		float X;
		cout << "Enter value X : ";
		cin >> X ;
		float Result (0);
		Result = X * X * X + 3 * X - 10; 
		cout << "\nResult of X*X*X + 3*X - 10 = ";
		cout << Result << endl;
		cout<<"\ndo it again? y or n : ";
		cin>>text;
		cout<<endl;
}while(text == 'y'||text=='Y');
	return (0);
}
