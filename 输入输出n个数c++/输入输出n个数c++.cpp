#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int n,i,a[1000],b;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> b;
		a[i] = b;
		cout << a[i] << " ";

}
	return 0;

}