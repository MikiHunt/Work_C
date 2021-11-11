#include<iostream>
#include<string.h>
#include<time.h>
#include<cstdlib>
#include<iomanip>

using namespace std;

void input_num(int &num_std,int &r_std);
int vote_or_nvote(int r_std);
void cal_random_number(int pre_num_std,int num_std);
void display(int y ,int num_vote[], int pre_num_std);
void display2();

int main(){

    int num_std,r_std,pre_num_std;
    char u;

    srand((int) time(0));
    input_num(num_std,r_std);
    pre_num_std = vote_or_nvote(r_std);
    display2();
    cal_random_number(pre_num_std,num_std);

    return 0;
}
void input_num(int &num_std,int &r_std){

    cout<<"Enter number student chairman : ";cin>>num_std;
    cout<<endl;
    cout<<"Number of right student : ";cin>>r_std;
    //return num_std;

}
int vote_or_nvote(int r_std){

    int pre_num_std;
    float vote,N_vote;

    pre_num_std = rand()% r_std;
    vote=float(pre_num_std*100)/float(r_std);

    cout<<"Number of Votes : "<<pre_num_std<<"  = "<<vote<<"%"<<endl;

    N_vote=float((r_std-pre_num_std)*100)/float(r_std);

    cout<<"Number of not Votes : "<<r_std-pre_num_std<<"  = "<<N_vote<<"%"<<endl;

    return pre_num_std;
}
void cal_random_number(int pre_num_std,int num_std){

    int num_vote[99999],sum=0,sum1=0,sum2=0;

    int Temp=0,Temp1=0;    

    sum=pre_num_std;
	
    for (int i = 1; i <= num_std; i++)
    {	
        num_vote[i] =  (rand() % sum);
        sum1+=num_vote[i];
        sum-=num_vote[i];
        //Temp=num_vote[num_std];
    }

    Temp1=num_vote[num_std];
    Temp1+=sum;
    num_vote[num_std]=0+Temp1;

    for (int y = 1; y <= num_std; y++)
    {

        if(sum1!=pre_num_std||sum1 == pre_num_std){
            /*Temp1=Temp+sum;
            num_vote[int(num_std)]=0+Temp1;*/
            display(y ,num_vote, pre_num_std);
            sum2=sum2+num_vote[y];
        }
    }

    cout<<"Total"<<setw(7)<<sum2<<right<<setw(12)<<float((sum2)*100)/float(pre_num_std);
}

void display(int y ,int num_vote[], int pre_num_std){

    cout<<right<<setw(2)<<y<<right<<setw(1)<<"."<<right<<setw(9)<<num_vote[y]<<"  "<<right<<setw(10)<< fixed <<setprecision(2)<<float((num_vote[y])*100)/float(pre_num_std)<<endl;

}

void display2(){

    cout<<"Result of election chairman"<<endl;
    cout<<"----------------------------"<<endl;
    cout<<"No.    Votes    Percent(%)"<<endl;
    cout<<"----------------------------"<<endl;
    
}