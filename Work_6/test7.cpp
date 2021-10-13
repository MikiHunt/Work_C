#include <iostream>
using namespace std;
int main (){
	
	int x = 4,y=2,z=9;
	if(z<=y){
		z=z-y;
		z=z%y;
		x=y+x;
	}else{
	z=z+y;
	z=z*y;
	x=y-x;
}
	cout<<x<<" "<<y<<" "<<z;
}
