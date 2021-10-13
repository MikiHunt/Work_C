#include<iostream>
using namespace std;
int main(){
	float petroleum,mileage,per_lit=4.5461,per_kilo=1.6093,per_gallon,sum_mil;
	float lit_kilo,kilometers;
	cout<<"Input petroleum used : ";
	cin>>petroleum;
	cout<<"Input mileage : ";
	cin>>mileage;
	per_gallon=mileage/petroleum;//Miles per gallon
	sum_mil=mileage*per_kilo;//sum kilo
	lit_kilo=petroleum*per_lit;
	lit_kilo=lit_kilo/sum_mil;
	kilometers=(sum_mil/petroleum)/per_lit;
	cout<<"Fuel economy = "<<per_gallon<<" Miles per gallon (MPG)"<<endl;
	cout<<"The car will use "<<lit_kilo<<" Liter per kilometer"<<endl;
	cout<<"Fuel economy = "<<kilometers<<" Kilometers per liter (km/L)";
	return 0;
}
