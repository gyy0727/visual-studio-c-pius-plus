#include<iostream>
#include<math.h>
using namespace std;
double swap(double x)
{
	double c;
	c = (x * x * x) - x - 1;
	return c;
}
int main()
{
	double d, e, f, g;
	cout << "�������䷶Χ" << endl;
	cin >> d >> e;
	f = swap(d);
	g = swap(e);
	cout << "�������ֵ�󷽳̽��Ϊ" << endl;
	cout << "x1=" << f << " "  << "x2=" << g << endl;
	if (f > 0)
	{
		if (g > 0)
		{
			return 0;
		}
		if (g < 0)
		{
			cout << "���ƽ�Ϊ1.25" << endl;
		}
	}
	else if (f < 0)
	{
		if (g < 0)
		{
			return 0;
		}
		if (g > 0)
		{
			cout << "���ƽ�Ϊ1.25" << endl;
		}
	}
	return 0;
}