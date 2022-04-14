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
	cout << "随机生成一个数a,请猜出这个数,为方便测试，直接告诉你a=" << a << endl;
	cin >> b;
	while (1)
	{
		 if (b < a)
		{
			cout << "请输入一个更大的数" << endl;
			break;
		}
		else if(b>a)
		{
			cout << "请输入一个更小的数" << endl;
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
			cout << "请输入一个更大的数" << endl;
			break;
		}
		else if (c > a)
		{
			cout << "请输入一个更小的数" << endl;
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
