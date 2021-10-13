#include<iostream>
using namespace std;
void sum2(int b,int t,int m,int s){
	int price_b=120,price_t=80,price_m=50,price_s=15;
	int sum=0;
	int customer=1000;
	float payment=0;
	sum =(b*price_b)+(t*price_t)+(m*price_m)+(s*price_s);
	if(sum == 0){
		payment = ((float)customer*50)/100;
		payment = (float)customer-(float)payment;
	}else if(sum >=1&&sum<=4999){
		payment = ((float)customer*10)/100;
		payment = (float)customer-(float)payment;
	}else if(sum >=5000&&sum<=9999){
		payment = customer;
	}else if(sum >=10000&&sum<=99999){
		payment = customer+((float)sum*5)/100;
	}else if(sum>=100000){
		payment = customer+((float)sum*10)/100;
	}
	cout<<"Payment = "<<payment<<endl<<"Price totol : "<<sum;
}
