#include<stdio.h>
#include<stdlib.h>
struct student
{
	char name[10];
	int age;
};
int main()
{
	int i;
	FILE* fp = fopen("stu.dat", "a+");
	if (fp == NULL)
	{
		printf("文件打开出错\n");
	}
	else
	{
		char a[10] = "abd";
		fputs(a, fp);
		fputs("\n",fp);
		fputs(a, fp);
		fclose(fp);
		fp = NULL;
	}
	return 0;
}
	
