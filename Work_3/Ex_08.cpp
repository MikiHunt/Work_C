#include <iostream>
#include <math.h>
using namespace std;
int main(){
	float Fahrenheit,Celsius;
	cout<<"Enter your Fahrenheit : ";
	cin>>Fahrenheit;
	Celsius = (Fahrenheit-32)/1.8;
	Fahrenheit = 1.8*Celsius+32;
	cout<<"Celsius : "<<Celsius<<endl;
	cout<<"Fahrenheit : "<<Fahrenheit<<endl;
	return 0;
}
