#include <iostream>
using namespace std;
void insertnum(int num[] , int max );
int main(){
    int A,X;
    cout << "How many number in array A : ";
    cin >> A;
    cout << "Enter "<< A << " integrs for array A : ";
    A+=1;
    int arrar_A[A];
    for (int i = 0; i < A-1; i++)
    {
        cin >> arrar_A[i];
    }
    cout << "Enter X : ";
    cin >> X;
    arrar_A[A-1]=X;
    insertnum(arrar_A,A);
    cout << "The final array A : ";
    for (int i = 0; i < A; i++)
    {
        cout << arrar_A[i] << " " ;
    }
    return 0;
}
void insertnum(int num[] , int max ){
    int T_num1;
    for (int i = 0; i < max; i++)
    {
        for (int j = i+1; j < max; j++)
        {
            if (num[j] < num[i])
            {
                T_num1 = num[j];
                num[j] = num[i];
                num[i] = T_num1;
            }
        }
    }
}
