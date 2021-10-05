#include <iostream>
#include <string>
using namespace std;
int main (){
	char text;
	string mounth[13]={"","January","February","March","April","May","June","July","August",
						"September","October","November","December"};
	int Nuumber,sum=0;
	do{
		cout<<"Enter your number mounth : ";
		cin>>Nuumber;
		sum=Nuumber;
		Nuumber;
		cout<<endl;
		if(Nuumber>=1&&Nuumber<=12){
			cout<<"Mounth "<<sum<<" : "<<mounth[Nuumber]<<endl;;
		}else {
			cout<<"Out of Value"<<endl;;
		}
		
		cout<<"\ndo it again? y or n : ";
		cin>>text;
		
		system ("CLS");
	}while(text == 'y'||text=='Y');
	return 0;
}
