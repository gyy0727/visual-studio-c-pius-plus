#include<iostream>
using namespace std;
int main()
{
	int a, i, arr[1000], n;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> a;
		if (a == -1)
		{
			break;
		}
		else
		{
			arr[i] = a;
		}
	}
	int sum;
	int j;
	for (i = 1; i < n; i++)
	{
		for (j = 1; j < n - i+1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				sum = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = sum;
			}
		}
	}
	for (i = 1; i < n+1; i++)
	{
		cout << arr[i] << " ";
	}
	system("pause");
	return 0;
}