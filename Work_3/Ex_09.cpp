#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int number_value;
	int number_digi_0,number_digi_1,number_digi_2,number_digi_3;
	cout<<"Enter Your number : " ;
	cin>>number_value;
	number_digi_3=(number_value%10000)/1000;
	number_digi_2=(number_value%1000)/100;
	number_digi_1=(number_value%100)/10;
	number_digi_0=number_value%10;
	cout<<number_digi_3<<"   "<<number_digi_2<<"   "<<number_digi_1<<"   "<<number_digi_0;

	return 0;
}
