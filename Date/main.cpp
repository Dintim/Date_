#include "date_.h"

void main()
{
	date_ a(4, 5, 2011);
	date_ b(14, 5, 2011);
	bool res = a >= b;
	cout << res << endl;

	system("pause");
}