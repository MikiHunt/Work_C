#include <iostream>

using namespace std;

int main(){
    int wooden_plank,logs,sum1,sum2,total,tmp1,tmp2;
    int big_table,small_table;
    int req_wood_big=0,req_log_big=0,req_wood_small=0,req_log_small=0;
    int req_big,req_small;
    
    cout << "\nEnter your number wooden plank : ";
    cin >> wooden_plank;
    cout << "\nEnter your number logs : ";
    cin >> logs;
    cout << "\nEnter your number big table : ";
    cin >> req_big;
    cout << "\nEnter your number small table : ";
    cin >> req_small;

    if(wooden_plank>=1 && logs >= 4)
    {
        for(int i = 1 ; i <= req_big ; i++){
            req_wood_big = req_wood_big + 2;
            req_log_big = req_log_big + 6;
        }
        for(int i = 1 ; i <= req_small ; i++)
        {
            req_wood_small = req_wood_small + 1;
            req_log_small = req_log_small + 4;
        }
        sum1 = req_wood_big + req_wood_small;
        sum2 = req_log_big + req_log_small;
        if(wooden_plank >=sum1 && logs>=sum2){
            wooden_plank = wooden_plank - sum1;
            logs = logs - sum2;
            cout << "\nYES" << " wooden plank : " << wooden_plank;
            cout << " logs : " << logs;
        }else
        {
            wooden_plank = sum1 - wooden_plank;
            logs = sum2 - logs;

            cout << "\nNo" << " wooden plank requirements : " << wooden_plank;
            cout << " logs requirements : " << logs;

        }
    }else
    {
        cout << "Out Stock";
    }
}