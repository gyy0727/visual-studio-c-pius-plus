#include<iostream>
using namespace std;
#include<string>
int main()
{
	int f, a, i, c, j, k, l;
	string s1[100], s2[100], b, d;
	cin >> a;
	for (i = 1; i <= a; i++)
	{
		cin >> b;
		s1[i] = b;
	}
	for (i = 1; i <= a; i++)
	{
		cout << s1[i] << " ";
	}
	cin >> c;
	for (i = 1; i <= c; i++)
	{
		cin >> d;
		s2[i] = d;
	}
	for (i = 1; i <= c; i++)
	{
		cout << s2[i] << " ";
	}
	cin >> f;

	for (j = 1; j <= f; j++)
	{
		cout << s1[j] << " ";
	}
	for (k = 1; k <= c; k++)
	{
		cout << s2[k] << " ";
	}
	for (l = f + 1; l <= a; l++)
	{
		cout << s1[l];
	}
	system("pause");
	return 0;
}