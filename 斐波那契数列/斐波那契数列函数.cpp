#include"ì³²¨ÄÇÆõÊıÁĞ.h"
int f(int x)
{

	int a;
	if (x > 2)
	{
		a = f(x - 1) + f(x - 2);
	}
	else
	{
		a = 1;
	}
	return a;
}