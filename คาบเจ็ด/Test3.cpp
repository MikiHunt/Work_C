#include <iostream>
#include <string>
using namespace std;

int main()
{
    int score, num_std, total_score = 0;
    cout << "Enter number of students : ";
    cin >> num_std;

    for (int i = 1; i <= num_std;)
    {
        cout << "Enter score person "<< i << " : ";cin >> score;
        if (score < 0 || score > 5 ) {
            cout << "You have entered the wrong score, please try again." << endl;
        }else{
            total_score += score; i++;
        }
    }
    cout << "Average : " << total_score/num_std;
    return (0);
}
