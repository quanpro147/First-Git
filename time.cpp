#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	time_t now=time(0);
	struct tm t;
	localtime_s(&t, &now);
	int hour= t.tm_hour;
	int minute = t.tm_min;
	int second = t.tm_sec;
	int year = t.tm_year;
	int month = t.tm_mon;
	int day = t.tm_mday;
	cout << year+1900 << "/" << month+1 << "/" << day << "/" << hour << "/" << minute << "/" << second;
	return 0;
}