#include <iostream>
using namespace std;
int main (){
	int Number_Grat;
	char text;
	do{
		
		cout<<"Enter your Grat Maths: ";
		cin>>Number_Grat;
		cout<<endl;
		if (Number_Grat>=80&&Number_Grat<=100){
			cout<<"Grat : A";
		}if (Number_Grat>=70&&Number_Grat<=79){
			cout<<"Grat : B";
		}if (Number_Grat>=60&&Number_Grat<=69){
			cout<<"Grat : C";
		}if (Number_Grat>=50&&Number_Grat<=59){
			cout<<"Grat : D";
		}if(Number_Grat<50&&Number_Grat>=0){
			cout<<"Grat : F";
		}if(Number_Grat>100||Number_Grat<0){
			cout<<"Out of value.";
		}
	
	
		cout<<"\n\ndo it again? y or n : ";
		cin>>text;
		system ("CLS");
	}while(text == 'y'||text=='Y');
	return 0;
}
