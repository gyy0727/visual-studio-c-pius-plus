#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j; 
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			if (j < i)
				printf("            ");  
			else
				printf("%d * %d = %02d  ", i, j, i * j);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}