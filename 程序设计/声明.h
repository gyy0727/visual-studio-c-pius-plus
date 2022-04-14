#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void recordstu(struct student s);//将学生信息写入文件
void collectstu();//输入学生信息
void searchstu(struct student s);//查找学生信息
void stuname();//输入学生学号
void stuchanged();//输入修改后学生信息
void changestu(struct student s);//修改学生信息
void stuchange();//输入学生学号
void studelete();//输入学生学号
void deleted(struct student s);//删除学生信息
void booknumber();//输入二手物品条码
void collectbook();//输入二手物品信息
void recordstub1(struct book s);//将二手物品信息写入文件
void searchbook(struct book s);//查找二手物品信息
void bookchange();//输入二手物品条码
void changebook(struct book s);//修改二手物品信息
void bookdelete();//输入想要删除的二手物品的条码
void bookdeleted(struct book s);//删除二手物品信息
void collectexchange();//输入要修改的二手物品信息
void exchangeadd(struct exchange s);//写入交易信息
void findcollect();//输入交易物品编号
void found(struct exchange s);//查找交易信息
void changenew();//输入要更改的交易信息的二手物品的编号
void changenews(struct exchange s);//更改交易信息
void deletenew();//输入要删除的交易信息中的商品编号
void deletenews(struct exchange s);//删除交易信息
int ability(int a);//功能函数
void menu();//打印菜单
struct book
{
    char name[20];
    double number;
    int price;
};
struct student
{
    char name[20];
    int cla;
    double xiehao;
}stu[100];
//将数据写入文件
struct exchange
{
    char name1[20];
    char name2[20];
    double bianhao;
    double time;
};
