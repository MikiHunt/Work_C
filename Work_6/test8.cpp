#include <iostream>
using namespace std;
int main()
{
    int stu;
    cout << "Enter Student amount    : ";
    cin >> stu;
    int numbers[stu];
    for (int i = 0; i < stu; i++) {
        do{
        cout << "Enter Score Student " << i + 1 << ": ";
        cin >> numbers[i];

        if (numbers[i] > 5 || numbers[i] < 0){
            cout << " Enter Score Student agin " << endl;
        }
        }while(numbers[i] > 5 || numbers[i] < 0);
    }
    int sum = 0;
    for (int i = 0; i < stu; i++) {
        sum += numbers[i];
    }
    float avg = sum / (float) stu;
    cout << "Average: " << avg << endl;
    return 0;
}
