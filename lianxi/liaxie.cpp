#include<iostream>
using namespace std;
#include<math.h>


int main()
{
;

double a, b, c, d, e, f;
cout << "�����뷽�̵�����ϵ��" << endl;
cin >> a >> b >> c;
d = b * b - 4 * a * c;
if (d < 0)
{

	cout << "�÷����޽�" << endl;

}
if (d >= 0)
{
	e = (-b + sqrt(d)) / 2 * a;
	f = (-b - sqrt(d)) / 2 * a;

}
    cout << "�÷��̵ĸ���" << f << " " << e << endl;


	






	








	return 0;

}
