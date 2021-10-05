#include<iostream>
#include<string>
using namespace std;

int main(){
	int in_room[16],homework[16],work_test[16],mid[16],final[16];
	int sum[16],count = 15;
	string name_lastname[16],grade[16];
	for(int i=1;i<=count;i++){
		cout<<"Student ["<<i<<"]"<<endl;
		cout<<"Enter Your Name Lastname : ";
		cin>>name_lastname[i];
		cout<<"Enter Your in_room : ";
		cin>>in_room[i];
		cout<<"Enter Your homework : ";
		cin>>homework[i];
		cout<<"Enter Your work_test : ";
		cin>>work_test[i];
		cout<<"Enter Your mid : ";
		cin>>mid[i];
		cout<<"Enter Your final : ";
		cin>>final[i];
		cout<<endl;
		sum[i]=in_room[i]+homework[i]+work_test[i]+mid[i]+final[i];
		if(sum[i]>80){
			grade[i]="A";
		}else if(sum[i]>70){
			grade[i]="B";
		}else if(sum[i]>60){
			grade[i]="C";
		}else if(sum[i]>50){
			grade[i]="D";
		}else if(sum[i]<50){
			grade[i]="F";
		}
 	}
	system("cls");
	for(int i=1;i<=count;i++){
		cout<<"=======================\n";
		cout<<"Student ["<<i<<"]"<<endl;
		cout<<"Name Lastname : "<<name_lastname[i]<<endl;
		cout<<"in_room : "<<in_room[i]<<endl;
		cout<<"homework : "<<homework[i]<<endl;
		cout<<"work_test : "<<work_test[i]<<endl;
		cout<<"mid : "<<mid[i]<<endl;
		cout<<"final : "<<final[i]<<endl;
		cout<<"Score total : "<<sum[i]<<endl;
		cout<<"Grade : "<<grade[i];
		cout<<"\n=======================";
		cout<<endl<<endl;
	}
	return 0;
}
