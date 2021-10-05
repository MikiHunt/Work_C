#include <iostream>
using namespace std;
int main (){
	int LeftOperand,RightOperand;
	char Operator,Choice;
	int Result;
	char text;
	do{
		cout << " Choise " << endl;
		cout<<" 1.Switch "<<endl<<" 2.IF"<<endl<<endl;
		cout<<"Enter your Choise : ";
		cin>>Choise;
		cout<<endl;
		switch(Choise){
			case'1':
			cout<<"Enter your LeftOperand Operator RightOperand : ";
			cin>>LeftOperand>>Operator>>RightOperand;
			cout<<endl;
			switch(Operator){
				case'+':
				Result=LeftOperand+RightOperand;
				break;
				case'-':
				Result=LeftOperand-RightOperand;
				break;
				case'*':
				Result=LeftOperand*RightOperand;
				break;
				case'/':
				Result=LeftOperand/RightOperand;
				break;
				default : cout << Operator << " is unrecognized operation.";
 				cout << endl;
 				return 1;
			}
			//SWITCH AND IF
			break;
			case'2':
				cout<<"Enter your number : ";
				cin>>LeftOperand>>Operator>>RightOperand;
				if(Operator=='+'){
					Result=LeftOperand+RightOperand;
				}else
				if(Operator=='-'){
					Result=LeftOperand+RightOperand;
				}else
				if(Operator=='*'){
					Result=LeftOperand+RightOperand;
				}else
				if(Operator=='/'){
					Result=LeftOperand+RightOperand;
				}else{
					cout << "............";
				}
			break;
	}
		cout << LeftOperand << " " << Operator << " ";
		cout << RightOperand << " equals " << Result;
		cout<<"\n\ndo it again? y or n : ";
		cin>>text;
		system ("CLS");
	}while(text == 'y'||text=='Y');
	return 0;
}
