#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE* fp;//�ļ��ṹָ��

	fp = fopen("1.txt", "a+");

	if (NULL == fp)
	{
		printf("�ļ���ʧ��!\n");
	}
	else
	{
		printf("�ļ��򿪳ɹ�!\n");

		char str[100];
		while (!feof(fp))
		{

			fgets(str, 100, fp);

			puts(str);
		}

		fclose(fp);//�ر��ļ�
	}

	system("pause");
}