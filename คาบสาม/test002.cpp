#include <iostream>
using namespace std;
int main()
{
	int Number;
    cout << "Enter number : ";
    cin >> Number;
    cout << Number / 1000 << "\t";
    cout << Number % 1000 / 100 << "\t";
    cout << Number % 100 / 10 << "\t";
    cout << Number % 10 << endl;
    return 0;
}
