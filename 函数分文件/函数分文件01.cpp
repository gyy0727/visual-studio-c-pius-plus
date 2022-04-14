#include<iostream>
#include"函数分文件.h"
using namespace std;
//void swap(int a, int b)
//{
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//	cout << "a= " << a << endl;
//	cout << "b= " << b << endl;
//}

int main()
{
	int a, b;
	a = 10;
	b = 20;
	swap(a, b);
	return 0;
}