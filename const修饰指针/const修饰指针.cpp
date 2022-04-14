#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	int b = 10;
	const int* p;
	p = &a;
	p = &b;

	int c = 20;
	int* const p1=&a;
	*p1 = 30;
	*p1 = 49;
	*p1 = b;
	return 0;


}