#include <iostream>
using namespace std;
int main(){
	cout << "Name : Jukkarin Tapjit\n";
	cout << "ID : 6406021410012\n";
	cout << "Lab EX 01\n";
	
	int number1,number2;
	float result;
	char x;
	do{
	cout<<endl;
	cout <<"----------------------------------\n";
	cout<<"Enter number1 : ";
	cin>>number1;
	//cout<<"\n";
	cout<<"Enter number2 : ";
	cin>>number2;
	//cout<<"\n";
	cout<<"Result of\n";
	result=(float)number1+(float)number2;
	cout<<number1 <<" + "<<number2<<" = "<<result<<"\n";
	result=number1-number2;
	cout<<number1 <<" - "<<number2<<" = "<<result<<"\n";
	result=number1*number2;
	cout<<number1 <<" * "<<number2<<" = "<<result<<"\n";
	result=(float)number1/(float)number2;
	cout<<number1 <<" / "<<number2<<" = "<<result<<"\n";
	result=number1 % number2;
	cout<<number1 <<" % "<<number2<<" = "<<result<<"\n\n";
	
	cout<<"do it again? y or n : ";
	cin>>x;
}while(x == 'y');

	return 0;
}
