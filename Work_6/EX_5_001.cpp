#include <iostream>
using namespace std;
int main(){
	int x;
	cout<<"Enter your number : ";
	cin >> x;
	if(x%5 == 0){
		cout<<x<<" is divide by 5";
	}else{
		cout<<x<<" is undivided by 5";
	}
	return 0;
}
