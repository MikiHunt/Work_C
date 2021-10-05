#include<iostream>
#include<string>
using namespace std;
void Ekak(int area , char type){
	int area_use,Mao1_price=200000,Mao2_price=150000,multi_price=0,sum=0;
	int all=0;
	char size;
	bool t= true;
	
		if(area>=20&&area<=40){
			//200,000baht
			all=Mao1_price;
			size = 'S';
		}else
		if(area>=41&&area<=100){
			area_use=area-40;
			multi_price=area_use*3000;
			all=Mao1_price+multi_price;
			//40 = 200,000 baht
			//Metr 3,000 baht
			size='M';
		}else
		if(area>=101){
			area_use=area-60;
			multi_price=area_use*2000;
			all=(Mao1_price+Mao2_price+multi_price);
			size='L';
		}
		if(type == 'B'||type == 'b'){
		if(size == 'S'){
			area=area *5000;
			sum=all+area;
		}else
		if(size == 'M'){
			area=area *7500;
			sum=all+area;
		}else
		if(size == 'L'){
			area=area *15000;
			sum=all+area;
		}
		}else if(type == 'G'||type == 'g'){
		if(size == 'M'){
			area=area *10000;
			sum=all+area;
		}else
		if(size == 'L'){
			area=area *20000;
			sum=all+area;
		}
		}else if(type == 'P'||type == 'p'){
		if(size == 'M'){
			area=area *15000;
			sum=all+area;
		}else
		if(size == 'L'){
			area=area *30000;
			sum=all+area;
		}
	}else{
		t=false;
	}
	if(t==true){
		cout<<"The house will cost "<<sum<<" baht to build";
	}else{
		cout<<"Error";
	}


}
