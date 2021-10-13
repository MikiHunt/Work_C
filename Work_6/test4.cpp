#include <iostream>
#include <string>
using namespace std;
int main()
{
	string Str;
	char l;
	int sum_low=0,i,sum_up=0,sum_spaces=0,sum_special=0;
	cout << "Enter String : ";
	getline(cin, Str, '\n');
	cout << endl;
	cout << "Your string enter : " << Str << endl;
	cout << "Length of string = " << Str.length() << endl;
	for (int n = 0 ; n < Str.length() ; n++) {
		
		if(Str.at(n)>='a'&&Str.at(n)<='z'){
			//l=(char)Str.at(n);
			sum_low=sum_low+1;
		}else if(Str.at(n)>='A'&&Str.at(n)<='Z'){
			//cout<<Str.at(n)<<" is upper character."<<endl<<Str.at(n)<<" ASCII Code : "<<int(l)<<endl;
			
			sum_up=sum_up+1;
		}else if(Str.at(n)==' '){
			sum_spaces=sum_spaces+1;
		}else if(Str.at(n)=='.'){
			sum_special=sum_special+1;
		}
	}
	cout<<"Your message have "<<sum_up<<" upper character."<<endl;
	cout<<"Your message have "<<sum_low<<" lowers character."<<endl;
	cout<<"Your message have "<<sum_spaces<<" spaces character."<<endl;
	cout<<"Your message have "<<sum_special<<" special character."<<endl;
	
return(0);
}
