#include<iostream>
using namespace std;
int main(){
	int score,max,count=1;
	do{
		cout<<"Enter you score ["<<count<<"] : ";
		cin>>score;
		count++;
		if(score>max){
			max=score;
		}
	}while(score != -1);
	cout<<"Score is : "<<max;
	return 0;
}
