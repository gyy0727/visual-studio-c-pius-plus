#include <stdio.h>

int main()
{
	//下面是写数据，将数字0~9写入到data.txt文件中
	FILE* fpWrite = fopen("keshe.txt", "a+");
	if (fpWrite == NULL)
	{
		printf("找不到该文件\n");
	}
	char i[10];
	scanf("%s", &i[10]);
	fprintf(fpWrite, "%s ", i[10]);
	fclose(fpWrite);
	//下面是读数据，将读到的数据存到数组a[10]中，并且打印到控制台上
	int a[10] = { 0 };
	FILE* fpRead = fopen("data.txt", "r");
	if (fpRead == NULL)
	{
		printf("找不到该文件\n");
	}
	int k = 12;
	fscanf(fpRead, "%d ", &a[k]);
	printf("%d ", a[k]);
	
	system("pause");

	return 0;
}