#include<iostream>
using namespace std;
#include<math.h>


int main()
{
;

double a, b, c, d, e, f;
cout << "请输入方程的三个系数" << endl;
cin >> a >> b >> c;
d = b * b - 4 * a * c;
if (d < 0)
{

	cout << "该方程无解" << endl;

}
if (d >= 0)
{
	e = (-b + sqrt(d)) / 2 * a;
	f = (-b - sqrt(d)) / 2 * a;

}
    cout << "该方程的根是" << f << " " << e << endl;


	






	








	return 0;

}
