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
			cout << "��λ����" << "=" << e << endl;
			cout << "a��a����" << c << endl;
			break;


		}
		else if (c < 100)
		{
			f = c % 10;
			g = (c - f) / 10;

			cout << "ʮλ����" << "=" << g << endl;
			cout << "��ƽ����" << "=" << c << endl;

			break;
		}
		else
		{
			cout << "ʮλ����" << "=" << "0" << endl;
			cout << "��Ϊ" << "c" << endl;
			break;

		}
	}
	return 0;


}