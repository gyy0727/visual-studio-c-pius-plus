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
		cout << "������ʵ��" << endl;
	}
	else if (d == 0)
	{
		x1 = x2 = (-b + sqrt(d)) / (2 * a);
		cout << "�������������ʵ��" << endl;
		cout << "x1" << "=" << "x2" << "=" << x1 << endl;

	}
	else
	{
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);
		cout << "������������ʵ����" << endl;

		cout << "x1" << "=" << x1 << " " << "x2" << "=" << x2 << endl;

	}


	return 0;


}
