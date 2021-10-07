#include<iostream>
#include<string.h>
#include<time.h>
#include<iomanip>
using namespace std;

int main(){
    int num_std,r_std,pre_num_std,num_vote[15],sum,sum1=0,sum2=0,sum3=0;    
    float vote,N_vote;
    int Temp,Temp1,Temp2;
    srand((int) time(0));
    cout<<"Enter number student chairman : ";cin>>num_std;
    cout<<endl;
    
    cout<<"Number of right student : ";cin>>r_std;
    pre_num_std = rand()% r_std;
    vote=float(pre_num_std*100)/float(r_std);
    cout<<"Number of Votes : "<<pre_num_std<<"  = "<<vote<<"%"<<endl;
    N_vote=float((r_std-pre_num_std)*100)/float(r_std);
    cout<<"Number of not Votes : "<<r_std-pre_num_std<<"  = "<<N_vote<<"%"<<endl;
    cout<<"Result of election chairman"<<endl;
    cout<<"----------------------------"<<endl;
    cout<<" No.    Votes    Percent(%)"<<endl;
    cout<<"----------------------------"<<endl;
    sum=pre_num_std;
    for (int i = 1; i <= num_std; i++)
    {	
        num_vote[i] =  (rand() % sum);
        sum1=sum1+num_vote[i];
        sum=sum-num_vote[i];
        Temp2=num_std;
        Temp=num_vote[Temp2];
        cout<<Temp;
    }
    for (int i = 1; i <= num_std; i++)
    {
        if(sum1 == pre_num_std){
            cout<<i<<"."<<"  X   "<<right<<setw(7)<<setbase(8)<<num_vote[i]<<"  "<<right<<setw(10)<< fixed <<setprecision(2)<<float((num_vote[i])*100)/float(pre_num_std)<<endl;
        }else if(sum1!=pre_num_std){
            Temp1=Temp+sum;
            num_vote[Temp2]=0+Temp1;
            cout<<i<<"."<<"  S   "<<right<<setw(7)<<setbase(8)<<num_vote[i]<<"  "<<right<<setw(10)<< fixed <<setprecision(2)<<float((num_vote[i])*100)/float(pre_num_std)<<endl;
            sum3=num_vote[i]+sum3;

        }
    }
    cout<<"Total"<<setw(7)<<setbase(8)<<sum3<<" "<<sum;
    return 0;
}
