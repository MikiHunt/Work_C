#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main(){
	
	string p[4];
	string q[4];
	for(int o=0;o<4;o++){
		cout<<"Enter P : ";
		cin>>p[o];
		
	}
	for(int u=0;u<4;u++){
		cout<<"Enter Q : ";
		cin>>q[u];
	}
	system ("CLS");
	for(int x=0;x<4;x++){
		
		cout<<"P = "<<p[x]<<" : Q = "<<q[x]<<endl;
	}
	for(int y=0;y<4;y++){
		if(p[y]=="t"&&q[y]=="t"){
		cout<<"t";
		}
	}

	
	return 0;
}
