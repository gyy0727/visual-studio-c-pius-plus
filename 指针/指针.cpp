#include<iostream>
using namespace std;
int main()
{
	int a = 20;
	int* kp;
	kp = &a;
	cout << *kp << endl;
	cout << kp << endl;
	cout << a << endl;
	int b = 100;
	//指向指针的指针
	int* np, ** nnp;
	np = &b;
	nnp =&np;
	cout << *np << endl;
	cout << **nnp << endl;
	return 0;

}