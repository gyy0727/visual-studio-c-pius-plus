#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
	int a, b, c, d, e, f, g, h, i, j, k, l,x,y,z,u,p,v;
	srand(time(0));
	a = (1 + rand() % 9);
	b = (1 + rand() % 9);
	c = (1 + rand() % 9);
	
	
	while (1)
	{
		if (a == b)
		{
			a = (1 + rand() % 9);
			b = (1 + rand() % 9);
		}
		else if (b == c)
		{
			c = (1 + rand() % 9);
			b = (1 + rand() % 9);
		}
		else if (a == c)
		{
			a = (1 + rand() % 9);
			c = (1 + rand() % 9);
		}
		else
		{
			d = a * 100 + 10 * b + c;
			cout << d << endl;
			break;
		}
	}
	cout << endl;
	e = 1 + rand() % 9;
	f = 1 + rand() % 9;
	g = 1 + rand() % 9;
	cout << "e" << "=" << e << endl;
	cout << "f" << "=" << f << endl;
	cout << "g" << "=" << g << endl;
	int m = 1;
	while (1)
	{
		while (1)
		{
			if (e == a)
			{
				h = 1, i = 0, j = 0;
				cout << "first" << " " << "k" << "=" << 1 << "l" << " =" << "0" << " " << "��" << m << "����ȷ" << "��ʱe=" << e << endl;
				x = m;
				cout << "��ʱ" << "x" << "=" << x;
				break;
			}
			else
			{
				h = 0;

				if (e == b)
				{
					i = 1, j = 0;

					cout << "first" << " " << "k" << "=" << 0 << "=" << "l" << "=" << "1" << " " << "��" << m++ << "��ʧ��" << endl;
					e = 1 + rand() % 9;
					cout << "e" << "��������" << "=" << e << endl;
				}
				else
				{
					i = 0;
					if (e == c)
					{
						j = 1;
					}
					else
					{
						j = 0;
					}
					e = 1 + rand() % 9;
					k = h;
					l = j + i;
					cout << "first" << " " << k << "=" << 0 << " " << "l" << "=" << "0" << " " << "��" << m++ << "��ʧ��" << "��ʱe" << "=" << e << endl;
				}
			}
		}
		break;
	}
	int h1, i1, j1, k1, l1, n = 1;
	cout << endl;
	while (1)
	{

		if (f == b)
		{
			h1 = 1, i1 = 0, j1 = 0;
			cout << "second" << " " << "k1" << "=" << 1  << " " << "l1" << " =" << "0" << " " << "��" << n << "����ȷ" << "��ʱf=" << f << endl;
			y = n;
			cout << "��ʱ" << "y" << "=" << y;
			break;
		}
		else
		{
			h1 = 0;

			if (f == a)
			{
				i1 = 1, j1 = 0;
				cout << "second" << " " << "k1" << "=" << 0  << " " << "l1" << "=" << "1" << " " << "��" << n++ << "��ʧ��" << endl;
				f = 1 + rand() % 9;
			}
			else
			{
				i1 = 0;
				if (f == c)
				{
					j1 = 1;
				}
				else
				{
					j1 = 0;
				}
				f = 1 + rand() % 9;
				k1 = h1;
				l1 = j1 + i1;
				cout << f << endl;
				cout << "second" << " " << "k1" << "=" << 0 << " " << "l1" << "=" << "0" << " " << "��" << n++ << "��ʧ��" << endl;
			}
		}
	}
	int h2, i2, j2, k2, l2, o = 1;
	cout << endl;
	while (1)
	{

		if (g == c)
		{
			h2 = 1, i2 = 0, j2 = 0;
			cout << "third" << " " << "k2" << "=" << 1 << " " << "l2" << " =" << "0" << " " << "��" << o << "����ȷ" << "��ʱg=" << g << endl;
			z = o;
			cout << "��ʱ" << "z" << "=" << z;
			break;
		}
		else
		{
			h2 = 0;

			if (g == a)
			{
				i2 = 1, j2 = 0;
				cout << "third" << " " << "k2" << "=" << 0 << " " << "l2" << "=" << "1" << " " << "��" << o++ << "��ʧ��" << endl;
				g = 1 + rand() % 9;
			}
			else
			{
				i2 = 0;
				if (g == b)
				{
					j2 = 1;
				}
				else
				{
					j2 = 0;
				}
				g = 1 + rand() % 9;
				
				l2 = j2 + i2;
				cout << g << endl;
				cout << "third" << " " << "k2" << "=" << 0 << " " << "l2" << "=" << "0" << " " << "��" << o++ << "��ʧ��" << endl;
			}
			cout << endl;
		}
		
	}
	cout << endl;
	v = x + y + z;
	cout << "��" <<  v << "��" << "�¶�" << endl;
			system("pause");
			return 0;
}
