#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main()
{
	double a, b, c, d,x1,x2;
	cin >> a >> b >> c;
	d = b * b - 4 * a * c;
	if (d < 0)
	{
		cout << "方程无实根" << endl;
	}
	else if (d == 0)
	{
		x1 = x2 = (-b + sqrt(d)) / (2 * a);
		cout << "方程有两个相等实根" << endl;
		cout << "x1" << "=" << "x2" << "=" << x1 << endl;

	}
	else
	{
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		cout << "方程有两不等实数根" << endl;

		cout << "x1" << "=" << x1 << " " << "x2" << "=" << x2 << endl;

	}


	return 0;


}
