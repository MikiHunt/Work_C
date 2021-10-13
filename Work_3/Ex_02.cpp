#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int a=12,b=3,c=6,d=2,f,g,j,k,l,o;
	g=(a+c)/(d-(b*b));
	j=(a+b)%c;
	k=b%c+d*a;
	l=a<b&&c>=d;
	o=true||c<=b+d;
	f= a-c==b*d||true&&d%b!=d;
	cout<<g<<endl<<j<<endl<<k<<endl<<l<<endl<<o<<endl<<f;
	return 0;
}
