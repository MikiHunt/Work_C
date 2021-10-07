#include<iostream>
#include<string>
using namespace std;
int main(){
    char std[4];
    string std1;
    for (int i = 1; i <= 3; i++)
    {
        cin>>std[i];
    }
    for (int i = 1; i <= 3; i++)
    {
        std1=std1+std[i];
    }
    cout<<std1;
    

    return 0;
}