#include <stdio.h>

int main()
{
	//������д���ݣ�������0~9д�뵽data.txt�ļ���
	FILE* fpWrite = fopen("keshe.txt", "a+");
	if (fpWrite == NULL)
	{
		printf("�Ҳ������ļ�\n");
	}
	char i[10];
	scanf("%s", &i[10]);
	fprintf(fpWrite, "%s ", i[10]);
	fclose(fpWrite);
	//�����Ƕ����ݣ������������ݴ浽����a[10]�У����Ҵ�ӡ������̨��
	int a[10] = { 0 };
	FILE* fpRead = fopen("data.txt", "r");
	if (fpRead == NULL)
	{
		printf("�Ҳ������ļ�\n");
	}
	int k = 12;
	fscanf(fpRead, "%d ", &a[k]);
	printf("%d ", a[k]);
	
	system("pause");

	return 0;
}