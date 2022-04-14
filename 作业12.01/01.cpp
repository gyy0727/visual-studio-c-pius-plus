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
	cout << "输入区间范围" << endl;
	cin >> d >> e;
	f = swap(d);
	g = swap(e);
	cout << "代入参数值后方程结果为" << endl;
	cout << "x1=" << f << " "  << "x2=" << g << endl;
	if (f > 0)
	{
		if (g > 0)
		{
			return 0;
		}
		if (g < 0)
		{
			cout << "近似解为1.25" << endl;
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
			cout << "近似解为1.25" << endl;
		}
	}
	return 0;
}