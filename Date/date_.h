#pragma once
#include <iostream>
using namespace std;

class date_
{
	int day, month, year;
public:
	date_();
	~date_();
	date_(int day, int month, int year);
	void print();
	void setDay(int day);
	void setMonth(int month);
	void setYear(int year);
	void setDate(int day, int month, int year);
	int getDay()const;
	int getMonth()const;
	int getYear()const;
};

bool operator>(const date_&a, const date_&b);
bool operator<=(const date_&a, const date_&b);
bool operator<(const date_&a, const date_&b);
bool operator>=(const date_&a, const date_&b);
bool operator==(const date_&a, const date_&b);
bool operator!=(const date_&a, const date_&b);


