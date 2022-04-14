#include"函数分文件.h"
void swap(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << "a= " << a << endl;
	cout << "b= " << b << endl;
}