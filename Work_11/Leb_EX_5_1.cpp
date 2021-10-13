#include<iostream>
#include<math.h>
using namespace std;
int main(){
	//sin(); tan(); cos(); log ();
	float number;
	cout<<"Enter number X : ";
	cin>>number;
	number = pow(sin(number),2)*pow(cos(number),2);
	cout<<number;
	cout<<"\n===================================="<<endl;
	return 0;
}
