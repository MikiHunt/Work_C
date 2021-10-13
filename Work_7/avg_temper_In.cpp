#include <iostream>
using namespace std;
void avg_temper(float temperature){
	int count=1;
	float sum,avg;
	do{
		cout<<"Enter your num temperature ["<<count<<"] : ";
		cin>>temperature;
		count+=1;
		sum+=temperature;
	}while(temperature != 0);
	cout<<"Count is : "<<count<<endl;
	avg=sum/(count-2);
	cout<<endl<<"Avg temperature is : "<<avg;
}
