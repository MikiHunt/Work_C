#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <sstream>
using namespace std;
int main(){
	char text;
	do{
		system ("CLS");
		int start_Kil,end_kil;
		float sum_kil,time_sum,speed;
		int number_digi_0,number_digi_1,number_digi_2,number_digi_3,number_digi_4,number_digi_5;
		string time;
		cout<<"Enter start kilometer : ";
		cin>>start_Kil;
		cout<<"Enter end kilometer : ";
		cin>>end_kil;
		cout<<"Enter time used(hour minute second) : ";
		cin>>time;
		int x;
		
		stringstream geek(time);
		geek >> x;
		number_digi_5=(x%1000000)/100000;
		number_digi_4=(x%100000)/10000;
		number_digi_3=(x%10000)/1000;
		number_digi_2=(x%1000)/100;
		number_digi_1=(x%100)/10;
		number_digi_0=x%10;
		sum_kil=(float)end_kil-(float)start_Kil;
		time_sum = ((float)number_digi_5*10)+(float)number_digi_4;
		time_sum = time_sum+((((float)number_digi_3*10)+(float)number_digi_2)/60);
		time_sum = time_sum+(((((float)number_digi_1*10)+(float)number_digi_0)/60)/60);
		cout<<"\nCar traveled "<<sum_kil<<" kilometers in "<<number_digi_5<<number_digi_4<<" hrs ";
		cout<<number_digi_3<<number_digi_2<<" min "<<number_digi_1<<number_digi_0<<" sec.";
		cout<<endl;
		speed = sum_kil/time_sum;
		cout<<"Average velocity was "<<speed <<" kph.";
		cout<<"\ndo it again? y or n : ";
		cin>>text;
		cout<<endl;
	}while(text == 'y'||text=='Y');
	return 0;
}
