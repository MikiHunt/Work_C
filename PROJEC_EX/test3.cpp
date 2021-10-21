#include <iostream>
#include <ctime>
using namespace std;
int main(){
	int day,month,year,tmp1;
		time_t ttime = time(0);
		tm *local_time = localtime(&ttime);
		day=15+local_time->tm_mday;
		month=1 + local_time->tm_mon;
		year=2443 + local_time->tm_year;
		//day+=5;
		if (day > 30)
		{
			tmp1 = day-30;
			month+=1;
			
			if (month >12)
			{
				year+=1;
			}
			cout << tmp1 << "/" << month << "/" << year;
		}else
		{
			cout << day << "/" << month << "/" << year;
		}

	return 0;
}
