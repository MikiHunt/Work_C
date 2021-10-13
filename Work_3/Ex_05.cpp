#include <iostream>
using namespace std;
int main(){
	int sum=0,price,product,use_price=50000,use_last=1,use_old=45,time_out=21032566;
	int date;
	cin>>price;
	cin>>product;
	cin>>date;
	
	sum=price+product;
	if(sum<=use_price&&use_day<=use_old&&date<=time_out){
		cout<<"Hi";
	}
	return 0;
}
