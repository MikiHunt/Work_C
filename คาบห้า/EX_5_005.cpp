#include <iostream>
using namespace std;
int main (){
	char text;
	double Nu_income,vat;
	do{
		cout<<"Enter your income : ";
		cin>>Nu_income;
		if(Nu_income <100000){
			vat=(Nu_income*5)/100;
			cout<<endl<<"Vat is 5% : "<<vat<<endl;;
		}else if(Nu_income >100000&&Nu_income<=500000){
			vat=(Nu_income*10)/100;
			cout<<endl<<"Vat is 10% : "<<vat<<endl;;
		}else if(Nu_income >500000&&Nu_income<=1000000){
			vat=(Nu_income*20)/100;
			cout<<endl<<"Vat is 20% : "<<vat<<endl;;
		}else if(Nu_income >1000000&&Nu_income<=4000000){
			vat=(Nu_income*30)/100;
			cout<<endl<<"Vat is 30% : "<<vat<<endl;
		}else if(Nu_income >4000000){
			vat=(Nu_income*37)/100;
			cout<<endl<<"Vat is 37% : "<<vat<<endl;;
		}
		
		cout<<"\ndo it again? y or n : ";
		cin>>text;
		system ("CLS");
	}while(text == 'y'||text=='Y');
	return 0;
}
