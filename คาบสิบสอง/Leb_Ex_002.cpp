#include<iostream>
#include<string.h>
#include<time.h>
#include <cstdlib>
#include<iomanip>
using namespace std;
int input_num(int num_std,int &r_std);
int vote_or_nvote(int r_std);
void cal(int &pre_num_std,int &num_std);
int main(){
    int num_std,r_std,pre_num_std;
    float vote,N_vote;
    int Temp,Temp1;
    srand((int) time(0));
    num_std = input_num(num_std,r_std);
    pre_num_std = vote_or_nvote(r_std);
    cout<<"Result of election chairman"<<endl;
    cout<<"----------------------------"<<endl;
    cout<<"No.    Votes    Percent(%)"<<endl;
    cout<<"----------------------------"<<endl;
    cal(pre_num_std,num_std);
    return 0;
}
int input_num(int num_std,int &r_std){
    cout<<"Enter number student chairman : ";cin>>num_std;
    cout<<endl;
    cout<<"Number of right student : ";cin>>r_std;
    return num_std;

}
int vote_or_nvote(int r_std){
    int pre_num_std,vote,N_vote;
    pre_num_std = rand()% r_std;
    vote=float(pre_num_std*100)/float(r_std);
    cout<<"Number of Votes : "<<pre_num_std<<"  = "<<vote<<"%"<<endl;
    N_vote=float((r_std-pre_num_std)*100)/float(r_std);
    cout<<"Number of not Votes : "<<r_std-pre_num_std<<"  = "<<N_vote<<"%"<<endl;
    return pre_num_std;
}
void cal(int &pre_num_std,int &num_std){
    int num_vote[15],sum,sum1=0,sum2=0,Temp,Temp1;    
    sum=pre_num_std;
    int o;
    for (int i = 1; i <= num_std; i++)
    {	
        num_vote[i] =  (rand() % sum)+1;
        sum1=sum1+num_vote[i];
        sum=sum-num_vote[i];
        Temp=num_vote[num_std];
    }
    for (int i = 1; i <= num_std; i++)
    {
        if(sum1 == pre_num_std){
            cout<<i<<"."<<"     "<<right<<setw(7)<<num_vote[i]<<"  "<<right<<setw(10)<< fixed <<setprecision(2)<<float((num_vote[i])*100)/float(pre_num_std)<<endl;
            sum2=sum2+num_vote[i];
        }else if(sum1!=pre_num_std){
            Temp1=Temp+sum;
            num_vote[int(num_std)]=0+Temp1;
            cout<<i<<"."<<"     "<<right<<setw(7)<<num_vote[i]<<"  "<<right<<setw(10)<< fixed <<setprecision(2)<<float((num_vote[i])*100)/float(pre_num_std)<<endl;
            sum2=sum2+num_vote[i];
        }
    }
    

       
    cout<<"Total"<<setw(10)<<sum2<<right<<setw(12)<<float((sum2)*100)/float(pre_num_std);


}

