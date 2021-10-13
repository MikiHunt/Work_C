#include <iostream>
#include <cmath>  
using namespace std;
int main(){
	cout << "Name : Jukkarin Tapjit\n";
	cout << "ID : 6406021410012\n";
	cout << "Lab EX 02\n";
	cout <<"----------------------------------\n";
	double numberA,numberB,numberC;
	double result1,x,sum,result2;
	char text;
	do{
	cout<<"AX^2 + BX + C = 0 \n";
	cout<<"Enter number A : ";
	cin>>numberA;
	cout<<"Enter number B : ";
	cin>>numberB;
	cout<<"Enter number C : ";
	cin>>numberC;
	x = ((numberB*numberB)-(4*(numberA * numberC))); 
	//sum= (-numberB-(sqrt(numberA)))/2*numberA;
	sum = numberB-(numberB+numberB);
	result1= (sum + sqrt(x))/(2*numberA);
	result2= (sum - sqrt(x))/(2*numberA);
	cout<<"Answer of "<<numberA<<"X^2 + "<<numberB<<"X + "<<numberC<<" = 0\n";
	
	cout<<"Answer 1 = "<<result1<<"\n";
	cout<<"Answer 2 = "<<result2;
	cout<<"\n\ndo it again? y or n : ";
	cin>>text;
}while(text == 'y');
	return 0;
}
