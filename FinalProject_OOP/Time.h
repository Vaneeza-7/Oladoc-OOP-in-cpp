#pragma once
#include<iostream>
using namespace std;

class Time
{
	int date, month, year, minute, hour;
public:
	Time();
	Time(int , int , int , int , int );
	void displayTime();
	void displayDate();
};

