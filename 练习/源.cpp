#include<stdio.h>
#include<stdlib.h>
struct student
{
    char name[10];
    int age;
    int cla;
};
char buf[100];
void recordstu(student s)
{
    FILE* fp;
    fp = fopen("stu.dat", "ab+");

    if (fp == NULL)
    {
        printf("文件打开失败/n");
    }
    else
    {
        fwrite(&s, sizeof(struct student), 1, fp);
        
    }
    fclose(fp);

};
void starkstudent(char a[10], int b, int c)
{
}
int main()
{
    struct student s = { "lihua",22,231 };
    struct student d = { "zhanghong",23,345 };
    struct student g = { "wangzi",34,324 };

    struct student k = { 0 };
    struct student j = { 0 };
    struct student l = { 0 };

    struct student arr[10];
    recordstu(s);
    recordstu(d);
    recordstu(g);
    FILE* fp = fopen("stu.dat", "r");
    rewind(fp);
    fseek(fp, 1*sizeof(struct student), SEEK_SET);
    fread(&k,sizeof(struct student), 1, fp);
    printf("%s,%d,%d\n", k.name, k.age, k.cla);
    fclose(fp);
    return 0;
}