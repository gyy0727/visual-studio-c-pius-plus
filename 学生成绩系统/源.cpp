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
	cout << "\t�������Ӧ����ѡ����" << endl;
	cout << "\t1.����ɼ�" << endl;
	cout << "\t2.�޸ļ�¼" << endl;
	cout << "\t3.ɾ����¼" << endl;
	cout << "\t4.����ɼ�" << endl;
	cout << "\t5.�˳�" << endl;

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
			cout << "��������ѧ������,�س���������ɼ�,���ո���,����,����,C���Ե�˳��" << endl;
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
