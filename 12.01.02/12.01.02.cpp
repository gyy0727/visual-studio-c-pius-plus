#include<iostream>
using namespace std;
int swap(int n)
{
	if (n == 1)
		return 1;
	else if (n == 2)
		return 1;
	else
		return swap(n - 2) + swap(n - 1);
}
int main()
{
	int n;
	cout << " 请输入所求斐波那契数列为第几项" << endl;
	cin >> n;
	cout << "那一项等于" << swap(n) << endl;
	return 0;
}