#include<iostream>
using namespace std;
#include<stdlib.h>

int main()
{
	int a, n, i;
	int b[10];
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> a;
		b[i] = a;
		cout << b[i] << " ";
	}
	system("pause");
	return 0;
}