#include<iostream>
#include<string.h>
#include<iomanip>

using namespace std;

int getdata (int &id_std,string &name,int &test1_std,int &test2_std,int &test3_std,int i);
void sortdata (int total[],int id_std[],int test1_std[],int test2_std[],int test3_std[],string name[],int count);
void average(float &number1,float &number2,float &number3,float &number4,int count);
void displaydata(int i,int id_std,int total,int test1_std,int test2_std,int test3_std,string name);
void displaydata_avg(float avg1,float avg2, float avg3,float avg4);

int main (){

    int id_std[20],test1_std[20],test2_std[20],test3_std[20];
    int total[20];
    string name[20];
    int count=20;
    float avg1=0,avg2=0,avg3=0,avg4=0;

    for (int i = 0; i < count; i++)
    {
        total[i]=getdata (id_std[i],name[i],test1_std[i],test2_std[i],test3_std[i],i+1);

        avg1=avg1+test1_std[i];
        avg2=avg2+test2_std[i];
        avg3=avg3+test3_std[i];
        avg4=avg4+total[i];
        
    }
    
    sortdata(total,id_std, test1_std, test2_std, test3_std, name, count);
    average(avg1,avg2,avg3,avg4,count+1);

    cout<<"------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"No."<<setw(7)<<"Id"<<setw(16)<<"Name"<<"                    "<<"Test1(25%)"<<setw(14)<<"Test2(25%)"<<setw(14);
    cout<<"Test3(50%)"<<setw(16)<<"Total(100%)"<<endl;
    cout<<"------------------------------------------------------------------------------------------------------------"<<endl;

    for(int i=0;i<count;i++){
            displaydata( i+1, id_std[i], total[i], test1_std[i], test2_std[i], test3_std[i], name[i]);
    }

    cout<<"------------------------------------------------------------------------------------------------------------"<<endl;

    displaydata_avg(avg1, avg2,  avg3, avg4);

    return 0;
}

int getdata (int &id_std,string &name,int &test1_std,int &test2_std,int &test3_std,int i){  

    bool t=false;
    int total;

    do{

            cout<<"Enter Id std ["<<i<<"] : ";cin>>id_std;
            cout<<"Enter Name std ["<<i<<"] : ";cin>>name;

        do{

            cout<<"Enter Test1 std ["<<i<<"] : ";cin>>test1_std;
            if (test1_std<=25)
            {
                t=true;
            }else{
                t=false;
            }

        } while (t==false);

        t = false;

        do{
            
            cout<<"Enter Test2 std ["<<i<<"] : ";cin>>test2_std;
            if (test2_std<=25)
            {
                t=true;
            }else{
                t=false;
            }

        } while (t==false);

        t = false;

        do{

            cout<<"Enter Test3 std ["<<i<<"] : ";cin>>test3_std;
            if (test3_std<=50)
            {
                t=true;
            }else{
                t=false;
            }

        } while (t==false);

        t = false;
        
    }while (t==true);

    total=test1_std+test2_std+test3_std;

    return total;
}

void sortdata (int total[],int id_std[],int test1_std[],int test2_std[],int test3_std[],string name[],int count){

    int temp1;
    string temp2;

    for(int i=0;i<count;i++)
        {		
            for(int j=i+1;j<count;j++)
            {
                if(total[j]>total[i])
                {
                    temp1  =total[i];
                    total[i]=total[j];
                    total[j]=temp1;

                    temp1  =id_std[i];
                    id_std[i]=id_std[j];
                    id_std[j]=temp1;

                    temp1  =test1_std[i];
                    test1_std[i]=test1_std[j];
                    test1_std[j]=temp1;

                    temp1  =test2_std[i];
                    test2_std[i]=test2_std[j];
                    test2_std[j]=temp1;

                    temp1  =test3_std[i];
                    test3_std[i]=test3_std[j];
                    test3_std[j]=temp1;

                    temp2  =name[i];
                    name[i]=name[j];
                    name[j]=temp2;
                }
            }
        }
}


void average(float &number1,float &number2,float &number3,float &number4,int count){

    number1=number1/count;
    number2=number2/count;
    number3=number3/count;
    number4=number4/count;
}

void displaydata(int i,int id_std,int total,int test1_std,int test2_std,int test3_std,string name){
    
    cout <<i<<right<<setw(10)<< id_std<<"           "<<setw(25)<<left<< name<<setw(15) <<fixed <<setprecision(2)<<float(test1_std);
    cout<<setw(15)<<float(test2_std)<<setw(15)<<float(test3_std);
    cout <<float(total)<<endl;

}
void displaydata_avg(float avg1,float avg2, float avg3,float avg4){

    cout<<setw(37)<<"Average of mark"<<right<<setw(15)<<avg1<<right<<setw(15)<<avg2<<right<<setw(15)<<avg3<<right<<setw(15)<<avg4;
    
}