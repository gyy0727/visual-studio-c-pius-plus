#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main()
{
	double data1, data2,a;
	char op;
	cin >> data1 >> data2 >> op;
	while (1)
	{
		if (data1 == 0)
		{
			cout << "除数不能为0" << endl;
			break;
		}
		else {
			switch (op)
			{
			case  '+':
				a = data1 + data2;
				cout << "data1+data2=" << a << endl;
				break;
			case  '-':
				a = data1 - data2;
				cout << "data1-data2=" << a << endl;
				break;
			case '*':
				a = data1 * data2;
				cout << "data1*data2=" << a << endl;
				break;
			case '/':
				a = data1 / data2;
				cout << "data1/data2=" << a << endl;
				break;
			default:
				cout << "op为非法运算符" << endl;
				break;
			}break;
		}
	}
	system("pause");
	return 0;
}