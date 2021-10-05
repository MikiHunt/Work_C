#include <iostream>
#include <cmath>
using namespace std;
int main (){
	int circum,area,volume,r,choice;
	cout<<"Enter the number of radious : ";
	cin>>r;
	cout<<"1. Calculate the circumference of circle"<<endl;
	cout<<"2. Calculate the area of circle"<<endl;
	cout<<"3. Calculate the volume of phere"<<endl;
	cout<<"Enter the choice : ";
	cin>>choice;
	if(choice ==1 ){
		float(circum) = 2.0*3.14*r;
		cout<<"Circumference of circle is : "<<circum;
	}
	if(choice ==2 ){
		float(area) = 3.14*pow(r,2);
		cout<<"Area of circle is : "<<area;
	}
	if(choice ==3 ){
		float(volume) = (4.0/3.0)*3.14*pow(r,3);
		cout<<"Volume of circle is : "<<volume;
	}
	return 0;
}
