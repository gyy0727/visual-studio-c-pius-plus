#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main()
{
	int a, b, c, d, e, f, g, h;
	cin >> a >> b >> c >> d >> e;
	f = a % 100;
	g = a % 400;
		switch (b)
		{
		case 1:
			c = c;
			break;
		case 2:
			c = 31 + c;
			break;
		case 3:
			c = 60 + c;
			break;
		case 4:
			c = 91 + c;
			break;
		case 5:
			c = 121 + c;
			break;
		case 6:
			c = 152 + c;
			break;
		case 7:
			c = 182 + c;
			break;
		case 8:
			c = 213 + c;
			break;
		case 9:
			c = 244 + c;
			break;
		case 10:
			c = 274 + c;
			break;
		case 11:
			c = 305 + c;
			break;
		case 12:
			c = 335 + c;
			break;
		default:
			cout << "wrong" << endl;
			break;
		}
		switch (d)
		{
		case 1:
			e = e;
			break;
		case 2:
			e = 31 + e;
			break;
		case 3:
			e = 60 + e;
			break;
		case 4:
			e = 91 + e;
			break;
		case 5:
			e = 121 + e;
			break;
		case 6:
			e = 152 + e;
			break;
		case 7:
			e = 182 + e;
			break;
		case 8:
			e = 213 + e;
			break;
		case 9:
			e = 244 + e;
			break;
		case 10:
			e = 274 + e;
			break;
		case 11:
			e = 305 + e;
			break;
		case 12:
			e = 335 + e;
			break;
		default:
			cout << "wrong" << endl;
			break;
		}
		cout << e << " " << c << endl;
		h = e - c + 1;
		if (a % 400 == 0)
		{
			h = h;

			cout << "Паёф" << h << endl;
	   }
		if ((a /100) % 4==0)
		{
			h = h - 1;
			cout << "Паёф" << h << endl;
		}

	system("pause");
	return 0;
}