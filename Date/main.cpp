#include "date_.h"


void main()
{
	/*date_ a(22,5,2015);
	date_ b;
	b=a+478;
	
	cout << b;
	b.getWeekDay();*/

	/*bool res = a >= b;
	cout << res << endl;*/

	/*date_ a(22, 5, 1983);
	date_ b;
	b=--a;
	cout << b;
	cout << a;*/

	date_ a(26, 11, 2018);
	date_ b(1, 1, 2019);
	cout << "Until New Year 2019: " << daysBetweenDates(a, b) << " days" << endl;
	cout << "curr date: " << daysToDateFromCurrDate(b) << endl;

	
	

	system("pause");
}