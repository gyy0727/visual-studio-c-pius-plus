#include<iostream>
using namespace std;
int main()
{
	int b[4][4] = { { 1, -2, 3, -4 }, { 1, 5, 0, 6 }, { 7, 3, 0, 3 }, { 8, 9, 0, -1 } };
	int i, j;
	for (i = 0; i <= 3; i++)
	{
		for (j = 0; j <= 3; j++)
		{
			cout << b[i][j] << " ";
		}
	}
	cout << endl;
	int a, p[10], k=1;
	for (i = 0; i <= 3; i++)
	{
		for (j = 0; j <= 3; j++)
		{
			if (b[i][j] > 0)
			{
				a = b[i][j];
				p[k] = a;
				k = k++;
			}
			if (b[i][j] == 0)
			{
				break;
			}
			if (b[i][j] < 0)
			{
				continue;
			}
		}
	}
	int sum;
	for (i = 1; i <=k; i++)
	{
		for (j = 1; j < k - i + 1; j++)
		{
			if (p[j] > p[j + 1])
			{
				sum = p[j];
				p[j] = p[j + 1];
				p[j + 1] = sum;
			}
		}
	}
	int h;
	for (h = 2; h <= k; h++)
	{
		cout << p[h] << " ";
	}
	system("pause");
	return 0;
}
	