#include <iostream>
#include <stdlib.h>
#include <cstdlib>
using namespace std;
int main(){
	char text;
	do{
		system ("CLS");
		int start_Kil,end_kil;
		float sum_kil,time_sum,speed;
		int time,Hr,Min,Sac;
		int number_hr_1,number_hr_10;
		int h,m,s;
		cout<<"Enter start kilometer : ";
		cin>>start_Kil;
		cout<<"Enter end kilometer : ";
		cin>>end_kil;
		cout<<"Enter time used(hour minute second) : ";
		cin >>Hr>>Min>>Sac;
		/*cin>>Hr;
		cin>>Min;
		cin>>Sac;*/
		//cin>>h;cin>>m;cin>>s;
		
		/*number_hr_10=(time%1000000)/100000;
		number_hr_1=(time%100000)/10000;
		number_min_10=(time%10000)/1000;
		number_min_1=(time%1000)/100;
		number_sec_10=(time%100)/10;
		number_sec_1=time%10;
		
		sum_kil=(float)end_kil-(float)start_Kil;
		time_sum = ((float)number_hr_10*10)+(float)number_hr_1;
		time_sum = time_sum+((((float)number_min_10*10)+(float)number_min_1)/60);
		time_sum = time_sum+(((((float)number_sec_10*10)+(float)number_sec_1)/60)/60);*/
		sum_kil=(float)end_kil-(float)start_Kil;
		time_sum = Hr;
		time_sum = time_sum+(Min/60);
		time_sum = time_sum+((Sac/60)/60);
		//cout <<h<<m<<s<<endl;
		cout<<"Car traveled "<<sum_kil<<" kilometers in "<<Hr<<" hrs ";
		cout<<Min<<" min "<<Sac<<" sec.";
		cout<<endl;
		
		speed = sum_kil/time_sum;
		cout<<"Average velocity was "<<speed <<" kph.";
		
		cout<<"\ndo it again? y or n : ";
		cin>>text;
		cout<<endl;
	}while(text == 'y'||text=='Y');
	return 0;
}
