#include"声明.h"
void booknumber()
{
    void searchbook(struct book s);
    double a;
    scanf("%lf", &a);
    struct book s = { 0 };
    s.number = a;
    searchbook(s);
};//处里书籍条码号并查找
void collectbook()
{
    void recordstub1(struct book s);
    char a[10];
    double b;
    int c;
    scanf("%s %lf %d", a, &b, &c);
    struct book s = { 0 };
    strcpy(s.name, a);
    s.price = c;
    s.number = b;
    recordstub1(s);
};//收集要插入的书籍信息
void recordstub1(struct book s)
{
    FILE* fp;
    fopen_s(&fp, "book.dat", "a+");
    if (fp == NULL)
    {
        printf("打开失败\n");
    }
    fwrite(&s, sizeof(struct book), 1, fp);
    fclose(fp);
    fp = NULL;
    printf("\n");
    printf("二手物品信息插入成功,已回到菜单,请继续输入数字选择功能\n");
};
void searchbook(struct book s)
{
    int i = 0;
    struct book k[100] = { 0 };//用来下面读写文件的时候存数据
    FILE* fp = fopen("book.dat", "a+");
    fseek(fp, 0L, SEEK_END);
    int size = ftell(fp);
    printf("%d", size);
    rewind(fp);
    for (i = 0; i < size / 40; i++)
    {
        fread(&k[i], sizeof(struct book), 1, fp);
    }
    for (i = 0; i < size / 40; i++)
    {
        if (s.number == k[i].number)
        {
            printf("查找成功,如下(书籍名,条码,价格:\n");
            printf("\n");
            printf("%s,%1.0lf,%d", k[i].name, k[i].number, k[i].price);
            break;
        }
    }
    printf("\n");
    printf(" 若显示二手物品信息则为查找成功, 否则为查找失败, 你已成功回到菜单,请输入数字选择功能\n");
    fclose(fp);
    fp = NULL;
}
void bookchange()
{
    void changebook(struct book s);
    double a;
    scanf("%lf", &a);
    struct book s;
    s.number = a;
    changebook(s);
}
void changebook(struct book s)
{
    int i = 0;
    struct book k[100] = { 0 };//用来下面读写文件的时候存数据
    FILE* fp = fopen("book.dat", "a+");
    fseek(fp, 0L, SEEK_END);
    int size = ftell(fp);
    rewind(fp);
    for (i = 0; i < size / 40; i++)
    {
        fread(&k[i], sizeof(struct book), 1, fp);
    }
    printf("请输入修改后二手物品的信息为(名字,条码编号,价格)\n");
    char a[20];
    double b;
    int c;
    scanf("%s %lf %d", a, &b, &c);
    for (i = 0; i < size / 40; i++)
    {
        if (s.number == k[i].number)
        {
            strcpy(k[i].name, a);
            k[i].price = c;
            k[i].number = b;
        }
    }
    fclose(fp);
    fp = NULL;
    FILE* fpp = fopen("book.dat", "w");
    fwrite(k, sizeof(struct book), size / 40, fpp);
    printf("\n");
    printf(" 修改成功, 你已成功回到菜单,请输入数字选择功能\n");
    fclose(fpp);
    fpp = NULL;
}
void bookdelete()
{
    void bookdeleted(struct book s);
    double a;
    scanf("%lf", &a);
    struct book s;
    s.number = a;
    bookdeleted(s);
}
void bookdeleted(struct book s)
{
    int i = 0;
    struct book k[100] = { 0 };//用来下面读写文件的时候存数据
    FILE* fp = fopen("book.dat", "a+");
    fseek(fp, 0L, SEEK_END);
    int size = ftell(fp);
    rewind(fp);
    for (i = 0; i < size / 40; i++)
    {
        fread(&k[i], sizeof(struct book), 1, fp);
    }
    for (i = 0; i < size / 40; i++)
    {
        if (s.number == k[i].number)
        {
            strcpy(k[i].name, "0");
            k[i].price = 0;
            k[i].number = 0;
        }
    }
    fclose(fp);
    fp = NULL;
    FILE* fpp = fopen("book.dat", "w");
    fwrite(k, sizeof(struct book), size / 40, fpp);
    printf("\n");
    printf(" 删除成功, 你已成功回到菜单,请输入数字选择功能\n");
    fclose(fpp);
    fpp = NULL;
}