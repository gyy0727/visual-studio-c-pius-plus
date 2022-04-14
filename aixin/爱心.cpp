#include<iostream>
using namespace std;

#include<math.h>
#define I 8
#define R 150

int main()
{
	int i, j, e;
	int a;
	int t1;
	for (i = 1, a = I; i <= I / 2; i++, a--) {
		t1 = 6;
		while (t1--)printf(" ");

		for (j = (int)(I - sqrt(I * I - (a - i) * (a - i))); j > 0; j--)
			printf(" ");
		for (e = 1; e <= 2 * sqrt(I * I - (a - i) * (a - i)); e++)
			printf("*");
		for (j = (int)(2 * (I - sqrt(I * I - (a - i) * (a - i)))); j > 0; j--)
			printf(" ");
		for (e = 1; e <= 2 * sqrt(I * I - (a - i) * (a - i)); e++)
			printf("*");
		for (j = (int)(I - sqrt(I * I - (a - i) * (a - i))); j > 0; j--)
			printf(" ");

		t1 = (int)(I - sqrt(I * I - (a - i) * (a - i)));
		t1 = 2 * t1;
		t1 += (int)(2 * sqrt(I * I - (a - i) * (a - i)));
		t1 = 20 - t1;

		while (t1--) printf(" ");

		for (j = (int)(I - sqrt(I * I - (a - i) * (a - i))); j > 0; j--)
			printf(" ");
		for (e = 1; e <= 2 * sqrt(I * I - (a - i) * (a - i)); e++)
			printf("*");
		for (j = (int)(2 * (I - sqrt(I * I - (a - i) * (a - i)))); j > 0; j--)
			printf(" ");
		for (e = 1; e <= 2 * sqrt(I * I - (a - i) * (a - i)); e++)
			printf("*");
		for (j = (int)(I - sqrt(I * I - (a - i) * (a - i))); j > 0; j--)
			printf(" ");

		printf("\n");
	}

	for (i = 1; i <= R / 2; i++) {

		if (i % 2 || i % 3)continue;

		t1 = 6;
		if (i == 6)printf(">>----");
		else while (t1--)printf(" ");

		for(j = (int)(R - sqrt(R * R - i * i)); j > 0; j--)
			printf(" ");
		for (e = 1; e <= 2 * (sqrt(R * R - i * i) - (R - 2 * I)); e++)
			printf("*");
		for (j = (int)(R - sqrt(R * R - i * i)); j > 0; j--)
			printf(" ");

		t1 = (int)(R - sqrt(R * R - i * i));
		t1 = 2 * t1;
		t1 += (int)(2 * (sqrt(R * R - i * i) - (R - 2 * I)));
		t1 = 35 - t1;

		if (i == 6) { printf("LOVE"); }
		else if (i == 48) { printf("\b\b\b"); }
		else
			while (t1--) printf(" ");
		for (j = (int)(R - sqrt(R * R - i * i)); j > 0; j--)
			printf(" ");
		for (e = 1; e <= 2 * (sqrt(R * R - i * i) - (R - 2 * I)); e++)
			printf("*");
		for (j = (int)(R - sqrt(R * R - i * i)); j > 0; j--)
			printf(" ");

		if (i == 6)printf("----->");
		printf("\n");
	}
	return 0;
}