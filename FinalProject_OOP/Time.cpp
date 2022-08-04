#include<iostream>
using namespace std;
#include "Time.h"

Time::Time()
{
	date = 01;
	month = 01;
	year = 2001;
	minute = 00;
	hour = 01;
}

Time::Time(int d, int m, int y, int min, int hr)
{
	date = d;
	month = m;
	year = y;
	minute = min;
	hour = hr;
}

void Time::displayTime()
{
	cout << hour << ":" << minute << endl;
}

void Time::displayDate()
{
	cout << year << "/" << month << "/" << date << endl;
}