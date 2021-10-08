#include<iostream>
#include<string.h>
#include <bits/stdc++.h>
#include<iomanip>
using namespace std;
int getdata (int &id_std,string &name,int &test1_std,int &test2_std,int &test3_std);
/*int sortdata (int total[]);
void average(float &number1,float &number2,float &number3,float &number4,int count);
void displaydata(int i,int id_std,int total,int test1_std,int test2_std,int test3_std,string name);
void displaydata1(float avg1,float avg2, float avg3,float avg4);*/
int main (){
    int id_std[21],test1_std[21],test2_std[21],test3_std[21],total[21];
    string name[21];
    int count=2;
    int n,l;
    int num[21];
    float avg1=0,avg2=0,avg3=0,avg4=0;
    int count_num=3,tmp;
    for (int i = 0; i <= count; i++)
    {
        total[i]=getdata (id_std[i],name[i+1],test1_std[i],test2_std[i],test3_std[i]);
        //n=sortdata (num);
        
        //num[i]= n;
        avg1=avg1+test1_std[i];
        avg2=avg2+test2_std[i];
        avg3=avg3+test3_std[i];
        avg4=avg4+total[i];

        /*n = sizeof(total[i]) / sizeof(total[0]);
        sort(id_std,id_std + n,greater<int>());
        sort(total,total + n,greater<int>());
        sort(test1_std,test1_std + n,greater<int>());
        sort(test2_std,test2_std + n,greater<int>());
        sort(test3_std,test3_std + n,greater<int>());*/
        
    }
    do
    {
        
        if(count_num < count-1 && total[count_num] > total[count_num+1])
        {
            tmp = total[count_num+1];

            total[count_num+1] = total[count_num];

            total[count_num] = tmp;

            count_num = 0;
        }
        else
        {
            count_num++;
        }
         
    }while(count_num < count+1);
    for(int i=count; i>=0; i--)
    {
        cout<<" "<<total[i];   
    }
    /*
    average(avg1,avg2,avg3,avg4,count+1);
    cout<<"-------------------------------------------------------------------------------"<<endl;
    cout<<"No."<<setw(7)<<"Id"<<setw(7)<<"Name"<<setw(11)<<"Test1(25%)"<<setw(11)<<"Test2(25%)"<<setw(11);
    cout<<"Test3(50%)"<<setw(13)<<"Total(100%)"<<endl;
    cout<<"-------------------------------------------------------------------------------"<<endl;
    for (int i = 0; i <= count; i++)
    {
        l=id_std[i];
        displaydata( i+1, id_std[i], total[i], test1_std[i], test2_std[i], test3_std[i], name[l]);
    }
    cout<<"-------------------------------------------------------------------------------"<<endl;
    displaydata1(avg1,avg2,avg3,avg4);*/
    return 0;
}

int getdata (int &id_std,string &name,int &test1_std,int &test2_std,int &test3_std){  

    int total;
    cout<<"Enter Id : ";cin>>id_std;
    cout<<"Enter Name : ";cin>>name;
    cout<<"Enter Test1 : ";cin>>test1_std;
    cout<<"Enter Test2 : ";cin>>test2_std;
    cout<<"Enter Test3 : ";cin>>test3_std;
    total=test1_std+test2_std+test3_std;
    return total;
}
/*
int sortdata (int total[]){
    int n;
    n = sizeof(total) / sizeof(total[0]);
    return n;

}


void average(float &number1,float &number2,float &number3,float &number4,int count){
    number1=number1/count;
    number2=number2/count;
    number3=number3/count;
    number4=number4/count;
}
void displaydata(int i,int id_std,int total,int test1_std,int test2_std,int test3_std,string name){
    
    cout <<i<<right<<setw(9)<< id_std<<right<<setw(6)<< name <<right<<setw(9)<<fixed <<setprecision(2)<<float(test1_std);
    cout<<right<<setw(11)<<float(test2_std)<<right<<setw(12)<<float(test3_std);
    cout <<right<<setw(12)<<float(total)<<endl;
    
    
}
void displaydata1(float avg1,float avg2, float avg3,float avg4){

    cout<<"Average of mark"<<right<<setw(10)<<avg1<<right<<setw(11)<<avg2<<right<<setw(12)<<avg3<<right<<setw(12)<<avg4;
}*/









/*#include<iostream>
#include<string.h>
#include <bits/stdc++.h>
#include<iomanip>
using namespace std;
void getdata (int count,int &id_std[],string name[],int &test1_std[],int &test2_std[],int &test3_std[]);
void sortdata(int count,int &total,int id_std,int test1_std,int test2_std,int test3_std);
void average(int total,int test1_std,int test2_std,int test3_std ,float &avg1,float &avg2, float &avg3,float &avg4,int count);
void displaydata(int i,int id_std,int total,int test1_std,int test2_std,int test3_std,string name,float avg1,float avg2, float avg3,float avg4);
int main (){
    int id_std[20],test1_std[20],test2_std[20],test3_std[20],total[20];
    string name[20];
    int count=20;
    int n,l;
    int num[20];
    for (int i = 0; i <= count; i++)
    {
        cout<<"Enter Id : ";cin>>id_std[i];
        cout<<"Enter Name : ";cin>>name[i+1];
        cout<<"Enter Test1 : ";cin>>test1_std[i];
        cout<<"Enter Test2 : ";cin>>test2_std[i];
        cout<<"Enter Test3 : ";cin>>test3_std[i];
        total[i]=test1_std[i]+test2_std[i]+test3_std[i];
        n = sizeof(total) / sizeof(total[0]);
        num[i]=n;
    }
    /*for (int i = 0; i <= count; i++)
    {
        cout<<total[i]<<endl;
    }*/
    //cout<<n<<endl;
    /*
    sort(id_std,id_std + n,greater<int>());
    sort(total,total + n,greater<int>());
    sort(test1_std,test1_std + n,greater<int>());
    sort(test2_std,test2_std + n,greater<int>());
    sort(test3_std,test3_std + n,greater<int>());
    
    cout << "Array after sorting : \n";
    for (int i = 0; i <= count; ++i){
        l=id_std[i];
        cout<<"====================="<<endl;
        cout <<"ID : "<< id_std[i] << " ";
        cout <<"name : "<< name[l] << " ";
        cout <<"test1_std : "<< test1_std[i] << " ";
        cout <<"test2_std : "<< test2_std[i] << " ";
        cout <<"test3_std : "<< test3_std[i] << " ";
        cout <<"total : "<< total[i] << " "<<endl;
    }


    return 0;
}
*/