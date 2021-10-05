#include <iostream>
using namespace std;
int main (){
	int LeftOperand,RightOperand;
	char Operator,Choise;
	int Result;
	float Area;
	char text;
	do{
		cout<< " Choise " << endl;
		cout<<" 1.Switch "<<endl<<" 2.IF"<<endl<<endl;
		cout<<"Enter your Choise : ";
		cin>>Choise;
		cout<<endl;
		switch(Choise){
			case'1':
				cout << " Program Calculate Area " << endl;
				cout << " 1. Clrcle" << endl;
				cout << " 2. Rectangle" << endl;
				cout << " 3. Exit" << endl;
				cout<<endl;
				cout<<"Enter your number : ";
				cin>>Choise;
			switch(Choise){
				case'1':
				float Radius;
					cout << "\nEnter radius : ";
					cin >> Radius;
					cout<<endl;
					Area = 3.14159F * Radius * Radius;
					cout << "Area of Circle = " << Area << endl;
				break;
				case'2':
				float Length,Width;
					cout << "Enter length and width : ";
					cin >> Length >> Width;
					cout<<endl;
					Area = Length * Width;
					cout << "Area of Rectangle = " << Area << endl;
				break;
				case'3':
				cout << "\n . . . Exit Program . . .\n";
				break;
				
			}
			break;
			case'2':
				float Area;
				cout << " Program Calculate Area " << endl;
				cout << " 1. Clrcle" << endl;
				cout << " 2. Rectangle" << endl;
				cout << " 3. Exit" << endl;
				cout<<endl;
				cout<<"Enter your number : ";
				cin>>Choise;
				if(Choise=='1'){
					float Radius;
					cout << "\nEnter radius : ";
					cin >> Radius;
					cout<<endl;
					Area = 3.14159F * Radius * Radius;
					cout << "Area of Circle = " << Area << endl;
				}else if(Choise=='2'){
					float Length,Width;
					cout << "Enter length and width : ";
					cin >> Length >> Width;
					cout<<endl;
					Area = Length * Width;
					cout << "Area of Rectangle = " << Area << endl;
				}else if(Operator=='3'){
					cout << "\n . . . Exit Program . . .\n";
				}else{
					cout << "\n . . . Exit Program . . .\n";	
				}
			break;
		}
		cout<<"\ndo it again? y or n : ";
		cin>>text;
		system ("CLS");
	}while(text == 'y'||text=='Y');
	return 0;
}
