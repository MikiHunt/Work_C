#include <iostream>
using namespace std;
int main (){
	int Number_Great;
	char text;
	do{
		
		cout<<"Enter your Grat Maths : ";
		cin>>Number_Great;
		cout<<endl;
		if (Number_Great>=80){
			cout<<"Grat "<<Number_Great<<" : A";
		}else if (Number_Great>=70){
			cout<<"Grat "<<Number_Great<<" : B";
		}else if (Number_Great>=60){
			cout<<"Grat "<<Number_Great<<" : C";
		}else if (Number_Great>=50){
			cout<<"Grat "<<Number_Great<<" : D";
		}else if(Number_Great<50){
			cout<<"Grat "<<Number_Great<<" : F";
		}else if(Number_Great>100||Number_Great<0){
			cout<<"Out of value.";
		}
	
	
		cout<<"\n\ndo it again? y or n : ";
		cin>>text;
		system ("CLS");
	}while(text == 'y'||text=='Y');
	return 0;
}
