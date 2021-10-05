#include<iostream>
using namespace std;
int main(){
	int n;
	int num;
	int sum;
	float avg;
	bool flag; //bool true false
	cout << "How many student score : ";
	cin >> n;
	int index[n];
	for(int i=1;i <= n;i++){  // 1 -----> n
		flag = true;
		while(flag == true){
			cout << " Enter student " << i << " score : ";
			cin >> num;
			if(num < 0 && num > 5){
				flag = true;
			}
			if(num >= 0 && num <= 5){
				flag = false;
			}
		}
		index[i] = num;
	}
	cout << "==============================================" << endl;
	for(int j = 1;j <= n;j++){
		avg=index[j];
		sum = sum + avg;
		cout << "Student "<< j << " score is " << index[j] << " point. " << endl;
	}
	avg = float(sum)/n;
	cout<<"score totol is : "<<sum<<" : Avg is :"<<avg;
	return 0;
}
