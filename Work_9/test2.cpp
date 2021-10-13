#include <iostream>
using namespace std;
int main (){
	
	float interest , month , inter_rate , in_mrate , outcome , sum_in_mrate;
	cout<<"Input interest : ";
	cin>>interest;
	cout<<"Input month : ";
	cin>>month;
	cout<<"Input inter_rate : ";
	cin>>inter_rate;
	cout<<"\n************************************************"<<endl<<endl;
	for (int i = 1 ; i<=month ; i++){
		in_mrate = ((interest*inter_rate)/100);
		outcome = interest+ in_mrate;
		
		cout<<"dep. " << interest <<" , in. = "<< in_mrate<< " , outcome = " <<outcome<<endl;
		
		interest	= outcome;
		sum_in_mrate+= in_mrate;

	}
	cout<<endl<<"************************************************"<<endl;
	cout<<"All of interest = "<< sum_in_mrate;
	return 0;
}
