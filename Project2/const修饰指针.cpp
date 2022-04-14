#include<iostream>
using namespace std;
int main()
{
	//1.const 修饰指针 常量指针
	int a = 10;
	int b = 10;
	int c = 30;
	const int const* p;
	p = &a;
		p = &b;
		p = &c;
	 return 0;
}