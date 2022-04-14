#include"声明.h"
void recordstu(struct student s)
{

    FILE* fp;
    fopen_s(&fp, "stu.dat", "a+");
    if (fp == NULL)
    {
        printf("打开失败\n");
    }
    fwrite(&s, sizeof(struct student), 1, fp);
    fclose(fp);
    fp = NULL;
    printf("学生插入成功,已回到菜单,请继续输入数字选择功能\n");
};
void collectstu()
{
    char a[20];
    int  c, f;
    double d, e;
    scanf("%s %d %lf", a, &c, &d);
    struct student s = { 0 };
    strcpy(s.name, a);
    s.cla = c;
    s.xiehao = d;
    recordstu(s);
}//插入学生信息
void searchstu(struct student s)//查找学生信息
{
    int i = 0;
    struct student k[100] = { 0 };//用来下面读写文件的时候存数据
    FILE* fp = fopen("stu.dat", "a+");
    fseek(fp, 0L, SEEK_END);
    int size = ftell(fp);
    rewind(fp);
    for (i = 0; i < size / 32; i++)
    {
        fread(&k[i], sizeof(struct student), 1, fp);
    }
    for (i = 0; i < size / 32; i++)
    {
        if (s.xiehao == k[i].xiehao)
        {
            printf("查找成功,如下:\n");
            printf("\n");
            printf("%s,%d,%1.0lf", k[i].name, k[i].cla, k[i].xiehao);
            break;
        }
    }
    printf("\n");

    printf(" 若显示学生信息则为查找成功, 否则为查找失败, 你已成功回到菜单,请输入数字选择功能\n");
    fclose(fp);
    fp = NULL;
}
void stuname()
{
    double a;
    scanf("%lf", &a);
    struct student s = { 0 };
    s.xiehao = a;
    searchstu(s);
};//处理学生学号并查找
void stuchanged()
{
    char a[20];
    double b;
    int c;
    scanf("%s %lf %d", &a[20], &b, &c);
};
void changestu(struct student s)
{
    int i = 0;
    struct student k[100] = { 0 };//用来下面读写文件的时候存数据
    FILE* fp = fopen("stu.dat", "a+");
    fseek(fp, 0L, SEEK_END);
    int size = ftell(fp);
    rewind(fp);
    for (i = 0; i < size / 32; i++)
    {
        fread(&k[i], sizeof(struct student), 1, fp);
    }
    printf("请输入修改后学生的信息为(姓名,班级,学号)\n");
    char a[20];
    double b;
    int c;
    scanf("%s %d %lf", a, &c, &b);
    for (i = 0; i < size / 32; i++)
    {
        if (s.xiehao == k[i].xiehao)
        {
            strcpy(k[i].name, a);
            k[i].cla = c;
            k[i].xiehao = b;
        }
    }
    fclose(fp);
    fp = NULL;
    FILE* fpp = fopen("stu.dat", "w");
    fwrite(k, sizeof(struct student), size / 32, fpp);
    printf("\n");
    printf(" 修改成功, 你已成功回到菜单,请输入数字选择功能\n");
    fclose(fpp);
    fpp = NULL;
}
void stuchange()
{
    double a;
    scanf("%lf", &a);
    struct student s;
    s.xiehao = a;
    changestu(s);
}
void studelete()
{
    void deleted(struct student s);
    double a;
    scanf("%lf", &a);
    struct student s;
    s.xiehao = a;
    deleted(s);
}
void deleted(struct student s)
{
    int i = 0;
    struct student k[100] = { 0 };//用来下面读写文件的时候存数据
    FILE* fp = fopen("stu.dat", "a+");
    fseek(fp, 0L, SEEK_END);
    int size = ftell(fp);
    rewind(fp);
    for (i = 0; i < size / 32; i++)
    {
        fread(&k[i], sizeof(struct student), 1, fp);
    }
    for (i = 0; i < size / 32; i++)
    {
        if (s.xiehao == k[i].xiehao)
        {
            strcpy(k[i].name, "0");
            k[i].cla = 0;
            k[i].xiehao = 0;
        }
    }
    fclose(fp);
    fp = NULL;
    FILE* fpp = fopen("stu.dat", "w");
    fwrite(k, sizeof(struct student), size / 32, fpp);
    printf("\n");
    printf(" 删除成功, 你已成功回到菜单,请输入数字选择功能\n");
    fclose(fpp);
    fpp = NULL;
}


