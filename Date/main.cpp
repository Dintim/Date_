#include "date_.h"

void main()
{
	date_ a(22,5,2015);
	date_ b;
	b=a+478;
	
	cout << b;
	b.getWeekDay();

	/*bool res = a >= b;
	cout << res << endl;*/
	

	system("pause");
}