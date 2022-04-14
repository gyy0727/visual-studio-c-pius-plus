#include<iostream>
#include<string>
using namespace std;
void swap(int arr[3][5], int* p1, int* p2, int* p3)
{
	int k, l;
	*p3 = arr[0][0];
	for (k = 0; k < 3; k++) {
		for (l = 0; l < 5; l++)
		{
			if (arr[k][l] >= *p3)
			{
				*p3 = arr[k][l];
				*p2 = l + 1;
				*p1 = k + 1;
			}
		}
	}
}
int main()
{
	
	int score[3][5];
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++) {
			cin >> score[i][j];
		}
	}
	int stus;
	int lesson;
	int grades;
	swap(score,& stus, &lesson,& grades);
	cout << "第" << stus << "的学生的第" << lesson << "门课程成绩最高，最高分是" << grades << endl;

	return 0;
}
