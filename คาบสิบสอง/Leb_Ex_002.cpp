#include<iostream>
#include<string.h>
#include<time.h>
using namespace std;

int main(){
    int score,num_std,r_std,pre_num_std,num_vote,sum,sum1,count=1;    
    float vote,N_vote;
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
    int o;


    do
    {
        num_vote =  rand() % pre_num_std;
        sum1=sum-num_vote;
        pre_num_std=sum1;
        cout<<pre_num_std<<"       "<<num_vote<<"       "<<sum1<<endl;
        
        count++;
    } while (count!=num_std);
    
        
        //cout<<i<<"."<<"     o "<<o<<"  "<<endl;//<<float((num_vote)*100)/float(sum)<<endl;

        
        
        
    
    cout<<" "<<pre_num_std;
    return 0;
}
