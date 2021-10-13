#include <iostream>
using namespace std;
int main (){
	int pro,mid,final,sum=0,i=0;
	cout<<"\nEnter Project score : ";
	cin>>pro;
	cout<<"Enter Midterm score : ";
	cin>>mid;
	cout<<"Enter Final score : ";
	cin>>final;
	if(pro<=20){
		i++;
	}else{
		cout<<"Project score Error !!!"<<endl;
	}
	if(mid<=30){
		i++;
	}else{
		cout<<"Midterm score Error !!!"<<endl;
	}
	if(final<=50){
		i++;
	}else{
		cout<<"Final score Error !!!"<<endl;
	}
	if(i==3){
		sum=pro+mid+final;
	}
	cout<<"Total Score : "<<sum<<endl;
	cout<<"Grade : ";
	if(i==3){
	if(sum>=80){
		cout<<"A";
	}else if(sum >=70){
		cout<<"B";
	}else if(sum >=60){
		cout<<"C";
	}else if(sum >=50){
		cout<<"D";
	}else if(sum <50){
		cout<<"F";
	}
}	
	cout<<endl;


	return 0;
}
