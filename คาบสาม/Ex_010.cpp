#include <iostream>
#include <math.h>
using namespace std;
int main(){
	long int number,i=1,d=0,m=0,l=0;
     cout<<"\nEnter binary:";
     cin>>number;

     cout<<"\nBinary to decimal:";
     while(number>0){
               m=(number%10);
               number=(number/10);
               l=m*i;
               d=d+l;
               i=i*2;
          }
     cout<<d;

	return 0;
}
