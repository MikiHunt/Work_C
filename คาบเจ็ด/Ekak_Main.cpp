#include<iostream>
#include "Ekak.cpp"
using namespace std;
int main (){
	int area;
	char type;
	cout<<"Enter the area : ";
	cin>>area;
	cout<<"Enter type of the material : ";
	cin>>type;
	Ekak(area,type);
}
