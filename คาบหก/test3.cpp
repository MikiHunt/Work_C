#include <iostream>
using namespace std;
int main(){
	int student,sum;
	int score,i;
	float avg;
	bool Flag = true;
do{
	cout<<"Enter your student number : ";
	cin>>student;
	if(student>0){
	for(i=1;i<=student;i++){
		cout<<"student score  ["<<i<<"]: ";
		cin>>score;
		if(score<0||score>5){
			do{
			cout<<"put again student score ["<<i<<"]: ";
			cin>>score;	
			}while(score>5&&score>0);
		}
		sum=sum+score;
	}
	Flag = false;
	}else{
		system ("CLS");
		cout<<"Plass up score "<<endl;
	}
}while(Flag);
	avg= static_cast<float>(sum)/ student;
	cout<<"Score totol : "<<sum <<endl<<"Average     : "<<avg <<endl;;
	return 0;
}
