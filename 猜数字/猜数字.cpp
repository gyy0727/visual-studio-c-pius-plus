#include<iostream>
using namespace std;
#include<stdlib.h>
#include<time.h>
int main()
{
	
	int a;
	int b,c,d,e,f,g,h,i,j,k;
	srand(time(0));
	a = rand() % 100;
	cout << "�������һ����a,��³������,Ϊ������ԣ�ֱ�Ӹ�����a=" << a << endl;
	cin >> b;
	while (1)
	{
		 if (b < a)
		{
			cout << "������һ���������" << endl;
			break;
		}
		else if(b>a)
		{
			cout << "������һ����С����" << endl;
			break;
		}
		else {
			 cout << "right" << endl;
			 cout << "game over" << endl;
			 return 0;
		 }
	}
	cin >> c;
	while (1)
	{
		if (c < a)
		{
			cout << "������һ���������" << endl;
			break;
		}
		else if (c > a)
		{
			cout << "������һ����С����" << endl;
			break;
		}
		else
		{
			cout << "right" << endl;
			return 0;
		}
	}
	cout << "game over" << endl;
	return 0;
}
