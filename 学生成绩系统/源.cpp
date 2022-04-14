#include<iostream>
using namespace std;
int main()
{
	int i;
	for (i = 1; i <= 20; i++)
	{
		cout << "-";
	}
	cout << endl;
	cout << "\t请输入对应数字选择功能" << endl;
	cout << "\t1.输入成绩" << endl;
	cout << "\t2.修改记录" << endl;
	cout << "\t3.删除记录" << endl;
	cout << "\t4.输出成绩" << endl;
	cout << "\t5.退出" << endl;

	for (i = 1; i <= 20; i++)
	{
		cout << "-";
	}

	int a,a1,a2,a3,a4, b[10000], c[10000], d[10000], e[10000];
	while (1)
	{
		cin >> a;
		if (a == 1)
		{
			cout << "请先输入学生人数,回车后再输入成绩,按照高数,物理,外语,C语言的顺序" << endl;
			for (i = 1; i <= a; i++)
			{
				cin >> a1 >> a2 >> a3 >> a4;
				b[i] = a1;
				c[i] = a2;
				d[i] = a3;
				e[i] = a4;
			}

		}
		if (a == 2)
		{

		}
	}

	cout << endl;
	return 0;

}
