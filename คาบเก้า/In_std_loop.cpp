#include <iostream>
using namespace std;
void grat(int l,int std_count,int sum){
	
		if(sum<=100&&sum>=80)
		cout<<"Std_gart ["<<l<<"] : A "<<endl;
		else if(sum<80&&sum>=70)
		cout<<"Std_gart ["<<l<<"] : B "<<endl;
		else if(sum<70&&sum>=60)
		cout<<"Std_gart ["<<l<<"] : C "<<endl;
		else if(sum<60&&sum>=50)
		cout<<"Std_gart ["<<l<<"] : D "<<endl;
		else if(sum<50)
		cout<<"Std_gart ["<<l<<"] : F "<<endl;
	
	return;
}
void loop_std_count(){
	int std_count,sum[100],in_class,hw,s_test,mid,final;
	bool o = true;
	cout<<"Enter your count std : ";
	cin>>std_count;
	for(int i=1;i<=std_count;i++){
		cout<<"Std ["<<i<<"]"<<endl;
		do{
			cout<<"Enter your in_class std : ";
			cin>>in_class;	
			if(in_class<=5){
				o=false;
			}else{
				cout<<"plase up"<<endl;
				o=true;
			}
		}while(o == true);
		do{
			cout<<"Enter your hw std : ";
			cin>>hw;	
			if(hw<=15){
				o=false;
			}else{
				cout<<"plase up"<<endl;
				o=true;
			}
		}while(o == true);
		do{
			cout<<"Enter your s_test std : ";
			cin>>s_test;	
			if(s_test<=10){
				o=false;
			}else{
				cout<<"plase up"<<endl;
				o=true;
			}
		}while(o == true);
		do{
			cout<<"Enter your mid std : ";
			cin>>mid;	
			if(mid<=35){
				o=false;
			}else{
				cout<<"plase up"<<endl;
				o=true;
			}
		}while(o == true);
		do{
			cout<<"Enter your final std : ";
			cin>>final;	
			if(final<=35){
				o=false;
			}else{
				cout<<"plase up"<<endl;
				o=true;
			}
		}while(o == true);
		sum[i-1]=in_class+hw+s_test+mid+final;
		cout<<"Std total score ["<<i<<"] : "<<sum[i-1]<<endl;
		grat(i,std_count,sum[i-1]);
	}
	
}

