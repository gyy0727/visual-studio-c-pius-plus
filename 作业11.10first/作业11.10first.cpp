#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int b, c, d, e, f, g, h;
	int i;
	for (i = 1; i <= 999; i++)
	{
		for (i = 1; i <= 999; i++)
		{
			if (i <= 9)
			{
				b = i / 1;
				cout << i << " ";
			}
			if (i >= 10)
			{
				if (i <= 99)
				{
					b = i %10;
					c = (i - b) /10;
					e = c * b;
					d = c + b;
					if (e == d)
					{
						cout << i << " ";
					}
				}
				if (i >= 100)
				{
					b = i %10;
					c = ((i - b)/10) % 10;
					e = c * b;
					d = c + b;
					f = (i - b - c * 10) / 100;
					g = e * f;
					h = d + f;
					if (g == h)
					{
						cout << i << " ";
					}
				}

			}
		}		
	}
	system("pause");
	return 0;
}