#include "date_.h"



date_::date_()
{
	day = 1;
	month = 1;
	year = 1900;
}


date_::~date_()
{
}

date_::date_(int day, int month, int year)
{
	setDay(day);
	setMonth(month);
	setYear(year);
}

void date_::print()
{
	if (day < 10) cout << "0";
	cout << day << ".";
	if (month < 10) cout << "0";
	cout << month << ".";
	cout << year << endl;
}

void date_::setDay(int day)
{
	if ((day > 0 && day < 32) && (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12))
		this->day = day;
	if ((day >0 && day < 31) && (month == 4 || month == 6 || month == 9 || month == 11))
		this->day = day;
	if (day >0 && day < 29 && month == 2)
		this->day = day;
	else this->day = 1;
}

void date_::setMonth(int month)
{
	if (month > 0 && month < 13) this->month = month;
	else this->month = 1;
}

void date_::setYear(int year)
{
	if (year < 1900) this->year = 1;
	else this->year = year;
}

void date_::setDate(int day, int month, int year)
{
	setDay(day);
	setMonth(month);
	setYear(month);
}

int date_::getDay()const
{
	return this->day;
}

int date_::getMonth()const
{
	return this->month;
}

int date_::getYear()const
{
	return this->year;
}

bool operator>(const date_ & a, const date_ & b)
{
	if (a.getYear() > b.getYear()) return true;
	else if (a.getYear() < b.getYear()) return false;
	else {
		if (a.getMonth() > b.getMonth()) return true;
		else if (a.getMonth() < b.getMonth()) return false;
		else {
			if (a.getDay() > b.getDay()) return true;
			else return false;
		}
	}	
}

bool operator<=(const date_ & a, const date_ & b)
{
	if (a.getDay() == b.getDay() && a.getMonth() == b.getMonth() && a.getYear() == b.getYear()) return true;
	else {
		if (a.getYear() < b.getYear()) return true;
		else if (a.getYear() > b.getYear()) return false;
		else {
			if (a.getMonth() < b.getMonth()) return true;
			else if (a.getMonth() > b.getMonth()) return false;
			else {
				if (a.getDay() < b.getDay()) return true;
				else return false;
			}
		}
	}
}

bool operator<(const date_ & a, const date_ & b)
{
	if (a.getYear() < b.getYear()) return true;
	else if (a.getYear() > b.getYear()) return false;
	else {
		if (a.getMonth() < b.getMonth()) return true;
		else if (a.getMonth() > b.getMonth()) return false;
		else {
			if (a.getDay() < b.getDay()) return true;
			else return false;
		}
	}
}

bool operator>=(const date_ & a, const date_ & b)
{
	if (a.getDay() == b.getDay() && a.getMonth() == b.getMonth() && a.getYear() == b.getYear()) return true;
	else {
		if (a.getYear() > b.getYear()) return true;
		else if (a.getYear() < b.getYear()) return false;
		else {
			if (a.getMonth() > b.getMonth()) return true;
			else if (a.getMonth() < b.getMonth()) return false;
			else {
				if (a.getDay() > b.getDay()) return true;
				else return false;
			}
		}
	}
}

bool operator==(const date_ & a, const date_ & b)
{
	return (a.getDay() == b.getDay() && a.getMonth() == b.getMonth() && a.getYear() == b.getYear());
}

bool operator!=(const date_ & a, const date_ & b)
{
	return !(a.getDay() == b.getDay() && a.getMonth() == b.getMonth() && a.getYear() == b.getYear());
}
