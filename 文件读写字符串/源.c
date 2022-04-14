#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE* fp;//文件结构指针

	fp = fopen("student.txt", "ab+");

	if (NULL == fp)
	{
		printf("文件打开失败!\n");
	}
	else
	{
		printf("文件打开成功!\n");

		char str[100];
		gets(str);
		fputs(str,fp);
		fclose(fp);//关闭文件
	}

	system("pause");
}