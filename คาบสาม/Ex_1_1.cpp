#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	
	int fish_number,tomato,fish_sum,tomato_sum,fish_discout,tomato_discout;
	int fish_use,tomato_use,blaec_fi_to;
	char text;
	
	do{
		system ("CLS");
		cout<<endl;
		cout<<"Enter your fish number : ";
		cin>>fish_number;
		cout<<"Enter your tomato number : ";
		cin>>tomato;
		cout<<"Enter your fish use : ";
		cin>>fish_use;
		cout<<"Enter your tomato use : ";
		cin>>tomato_use;
		if(fish_number>=fish_use&&tomato>=tomato_use){
		
			fish_number=fish_number/fish_use;
			tomato=tomato/tomato_use;
			
			if(fish_number>=tomato){
				fish_sum=tomato;
				fish_discout=fish_number-fish_sum;
				tomato_discout=tomato-fish_sum;
				
				cout<<"Canned fish : "<<fish_sum<<endl<<"fish_discout : ";
				cout<<fish_discout<<endl<<"tomato_discout : "<<tomato_discout;
			}else if(tomato>=fish_number){
				tomato_sum=fish_number;
				tomato_discout= tomato-tomato_sum;
				fish_discout=fish_number-tomato_sum;
				cout<<"Canned fish : "<<tomato_sum<<endl<<"fish_discout : ";
				cout<<fish_discout<<endl<<"tomato_discout : "<<tomato_discout;
			}else if(fish_number == tomato||tomato == fish_number){
				blaec_fi_to=tomato;
				tomato_discout= tomato-blaec_fi_to;
				fish_discout=fish_number-blaec_fi_to;
				cout<<"Canned fish : "<<blaec_fi_to<<endl<<"fish_discout : ";
				cout<<fish_discout<<endl<<"tomato_discout : "<<tomato_discout;
			}else{
			}
		}
		else
		{
			cout<<"Canned fish : 0"<<endl<<"fish_discout : ";
			cout<<fish_number<<endl<<"tomato_discout : "<<tomato;
		}
		cout<<"\n\ndo it again? y or n : ";
		cin>>text;
	}while(text == 'y'||text=='Y');
	return 0;
}
