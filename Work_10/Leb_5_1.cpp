#include <iostream>
#include <string>
using namespace std;
int main(){
	
	char Ch;
	string Message;
	cout<<"Enter character : ";
	cin>>Ch;
	cout<<endl;
	if(isalnum(Ch)){
		if(isalpha(Ch)){
			if(islower(Ch)){
				Message = "Lower Character.";
			}else{
				Message = "Upper Character.";
			}
			
		}else if(isdigit(Ch)){
			Message="Digit.";
		}
	}else{
		Message = "Special Character.";
	}
	cout << "\'" << Ch << "\'" << " is " << Message << endl;

	if(isalpha(Ch)){
		if(islower(Ch)){
			cout << "\'" << Ch << "\'" << " convert to upper \'";
			cout << (char)toupper(Ch) << "\'";

		}else {
			cout << "\'" << Ch << "\'" << " to lower \'";
			cout << (char)tolower(Ch) << "\'";
		}
		cout << endl;
	}
	return 0;
}
