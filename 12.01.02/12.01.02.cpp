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
	cout << " ����������쳲���������Ϊ�ڼ���" << endl;
	cin >> n;
	cout << "��һ�����" << swap(n) << endl;
	return 0;
}