#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"����.h"
int main()
{
    menu();
    int Xx;
    while (1)
    {
        scanf("%d", &Xx);
        if (Xx != 0)
        {
            ability(Xx);//�˵�����
        }
        if (Xx == 0)
        {
            printf("���˳�ϵͳ\n");
            break;
        }
    }
    return 0;
}