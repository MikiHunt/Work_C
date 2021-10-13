#include <iostream>
#include "month_select_In.cpp"
using namespace std;
int main(){
	int month;
	cout<<"Enter a number(1,2,3,4,5,6,7,8,9,10,11,12) : ";
	cin>>month;
	select_month(month);
	return 0;
}
