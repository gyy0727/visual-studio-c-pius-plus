#include<iostream>
using namespace std;
int main()
{
	int n, a, i, arr[1000];
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> a;
		arr[i] = a;
	}
	int j, sum1;
	for (i = 1; i < n; i++)
	{
		for (j = 1; j < n - i + 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				sum1 = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = sum1;
			}
		}
	}
	for (i = 1; i <= n; i++)
	{
		if (arr[i] == arr[i++])
		{
			arr[i] = -1;
		}
	}
	for (i = 1; i <= n; i++)
	{
		if (arr[i] >= 0)
		{
			cout << arr[i] << " ";
		}
	}
	system("pause");
	return 0;
}