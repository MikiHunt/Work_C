#include <iostream>
using namespace std;
int main(){
	int x;
	cout<<"Enter your number : ";
	cin >> x;
	if(80<=x){
		if(x<=100){
			cout<<"Grade = G : Good";
		}
	}else if(50<=x){
		if(x<80){
			cout<<"Grade = P : Pass";	
		}
	}else if(0<=x){
		if(x=50){
			cout<<"Grade = F : Fail";
		}
	}
	return 0;
}
