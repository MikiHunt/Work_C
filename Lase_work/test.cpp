#include <iostream>
using namespace std;
int main(){

    int score,sum=0;
    cout << "Enter your score : "; 
    cin >> score;
    while (score != -1)
    {
        if (score > sum)
        {
            sum = score;
        }
        cout << "Enter your score : "; 
        cin >> score;
    }
    cout << "\nScore : " << sum;
    
    return 0;
}