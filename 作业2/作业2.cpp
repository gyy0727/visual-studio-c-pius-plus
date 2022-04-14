#include<iostream>
using namespace std;
int main()
{
	int a, b,c,d,e,f,g;
	cin >> a >> b;
	c = a * a + b * b;
	while (1)
	{
		if (c > 100)
		{
			d = (int)(c / 100);
			e = d % 10;
			cout << "百位数字" << "=" << e << endl;
			cout << "a乘a等于" << c << endl;
			break;


		}
		else if (c < 100)
		{
			f = c % 10;
			g = (c - f) / 10;

			cout << "十位数字" << "=" << g << endl;
			cout << "两平方和" << "=" << c << endl;

			break;
		}
		else
		{
			cout << "十位数字" << "=" << "0" << endl;
			cout << "积为" << "c" << endl;
			break;

		}
	}
	return 0;


}