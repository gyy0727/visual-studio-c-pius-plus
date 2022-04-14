#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"声明.h"
int main()
{
    menu();
    int Xx;
    while (1)
    {
        scanf("%d", &Xx);
        if (Xx != 0)
        {
            ability(Xx);//菜单函数
        }
        if (Xx == 0)
        {
            printf("已退出系统\n");
            break;
        }
    }
    return 0;
}