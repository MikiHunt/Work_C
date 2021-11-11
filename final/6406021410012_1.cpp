#include <iostream>
using namespace std;

bool match(int num[]);
int main(){
    int number[13];
    bool flag;
    cout << "Enter 13 integers : ";

    for (int i = 0; i < 13; i++)
    {
        cin >> number[i];
    }
    flag = match (number);
    if(flag == 0){
        cout << "\nSymmetry."; 

    }else {
        cout << "Not Symmetry."; 
    }
    return 0 ;
}
bool match(int num[]){

    bool flag = 0;
    int count = 12;
    for (int i = 0; i < 13; i++)
    {
        if(num[i] != num[count]){

            flag = 1;

        }
        count = count - 1;
    }
    
   return flag;

}