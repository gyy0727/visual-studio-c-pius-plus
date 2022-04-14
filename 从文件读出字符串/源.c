#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE* fp;//文件结构指针

	fp = fopen("1.txt", "a+");

	if (NULL == fp)
	{
		printf("文件打开失败!\n");
	}
	else
	{
		printf("文件打开成功!\n");

		char str[100];
		while (!feof(fp))
		{

			fgets(str, 100, fp);

			puts(str);
		}

		fclose(fp);//关闭文件
	}

	system("pause");
}