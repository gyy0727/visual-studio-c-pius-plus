#include<iostream>
using namespace std;
int main()
{
	int i, n, a, arr[100];
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> a;
		arr[i] = a;

	}
	int sum = 0;
	for (i = 1; i <= n; i++)
	{
		sum = arr[i] + sum;
	}
	double c;
	c = sum / n;
	cout << "平均数等于" << c;
	for (i = 1; i <= n; i++)
	{
		if (arr[i] <= c)
		{
			cout << "低于平均值的数为" << endl;
			cout << arr[i] << " ";
		}
	}
	cout << endl;
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
	cout << "排序后" << endl;
	int k;
	k =arr[1];
	arr[1] = arr[n];
	arr[n] = k;
	for (i = 1; i <= n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	for (i = 1; i <= n; i++)
	{
		if (arr[i] <= c)
		{
			cout << arr[i] << " ";
		}
		else
		{
			continue;
		}
	}
	system("pause");
	return 0;
}