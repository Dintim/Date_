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
	void print()const;
	void setDay(int day);
	void setMonth(int month);
	void setYear(int year);
	void setDate(int day, int month, int year);
	int getDay()const;
	int getMonth()const;
	int getYear()const;
	date_ operator+=(int day);
	date_ operator-=(int day);
	void getWeekDay()const;

};

bool operator>(const date_&a, const date_&b);
bool operator<=(const date_&a, const date_&b);
bool operator<(const date_&a, const date_&b);
bool operator>=(const date_&a, const date_&b);
bool operator==(const date_&a, const date_&b);
bool operator!=(const date_&a, const date_&b);
date_ operator+(const date_&a, int day);
date_ operator-(const date_&a, int day);

ostream&operator<<(ostream&os, const date_&obj);
istream&operator>>(istream&is, date_&obj);


