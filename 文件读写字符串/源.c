#include <stdio.h>
#include <stdlib.h>

void main()
{
	FILE* fp;//�ļ��ṹָ��

	fp = fopen("student.txt", "ab+");

	if (NULL == fp)
	{
		printf("�ļ���ʧ��!\n");
	}
	else
	{
		printf("�ļ��򿪳ɹ�!\n");

		char str[100];
		gets(str);
		fputs(str,fp);
		fclose(fp);//�ر��ļ�
	}

	system("pause");
}