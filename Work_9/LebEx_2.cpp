#include <iostream>
using namespace std;
int main (){
	int salary,time=0,total_sa=0,OT=200,late_sum=0;
	char late,hour;
	bool t=true;
	cout<<"Enter Salary : ";
	cin>>salary;
	do{
	cout<<"Late (Y/N) : ";
	cin>>late;
	/*if(late=='N'){
		break;
	}*/
	}while(late!='Y'&&late!='N');
	do{
	cout<<"Over Time Hour (Y/N) : ";
	cin>>hour;
	/*if(hour=='N'){
		break;
	}*/
	}while(hour!='Y'&&hour!='N');
	if(hour =='Y'){
		cout<<"Enter OT Hour : ";
		cin>>time;
	}
	
	if(late=='N'){
		late_sum=1000;
	}

	total_sa=(salary+late_sum)+(time*OT);
	cout<<"Salary : "<<total_sa;
	return 0;
}
