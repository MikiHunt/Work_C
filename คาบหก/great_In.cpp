#include <iostream>
#include <math.h>
using namespace std;

void do_this(int Mid,int Final,int Hw){
	bool F=true;
	int x;
	do{
	if(Mid>=0&&Mid<=100){
		if(Final>=0&&Final<=100){
			if(Hw>=0&&Hw<=10){
			}else {
				do{
					Hw=0;
					cout<<"Enter your Score Hw again : ";
					cin >> Hw;
					
				}while(Hw<=0&&Hw>=10);
			}
		}else {
			do{
				Final=0;
				cout<<"Enter your Score Final again : ";
				cin >> Final;
				
			}while(Final<=0&&Final>=100);
		}
	}else {
	do{
		Mid=0;
		cout<<"Enter your Score Mid again : ";
		cin >> Mid;
	}while(Mid<=0&&Mid>=100);
	}if(Mid>=0&&Mid<=100){
		if(Final>=0&&Final<=100){
			if(Hw>=0&&Hw<=10){
				F=false;
			}
		}
		
	}
	
}while(F);
x=((Mid*40)/100)+((Final*50)/100)+Hw;
	cout<<x<<endl;
	if(90<=x){
		if(x<=100)
		cout<<"Grade = A";
	}else if(85<=x){
		if(x<90)
		cout<<"Grade = B+";
	}else if(80<=x){
		if(x<85)
		cout<<"Grade = B";
	}else if(70<=x){
		if(x<80)
		cout<<"Grade = C+";
	}else if(60<=x){
		if(x<70)
		cout<<"Grade = C";
	}else if(55<=x){
		if(x<60)
		cout<<"Grade = D+";
	}else if(50<=x){
		if(x<55)
		cout<<"Grade = D";
	}else if(x<50){
		
		cout<<"Grade = F";
	}

}
