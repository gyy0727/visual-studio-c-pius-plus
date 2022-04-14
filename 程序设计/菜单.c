#include"声明.h"
int ability(int a)
{
    switch (a)
    {
    case 1:
        printf("请输入学生姓名,,班级,学号以插入信息\n");
        collectstu();
        break;
    case 2:
        printf("请输入学生学号以查找信息\n");
        stuname();
        break;
    case 3:
        printf("请输入学生学号以修改信息\n");
        stuchange();
        break;
    case 4:
        printf("请输入学生学号来删除学生信息\n");
        studelete();
        break;
    case 5:
        printf("请输入二手物品的物品名,商品条码,价格(元)来上架商品\n");
        collectbook();
        break;
    case 6:
        printf("请输入二手物品的条码查找\n");
        booknumber();
        break;
    case 7:
        printf("请输入二手物品条码编号以修改信息\n");
        bookchange();
        break;
    case 8:
        printf("请输入想要下架的二手物品条码编号\n");
        bookdelete();
        break;
    case 9:
        printf("请输入交易的卖家名和卖家名,二手物品的条码编号和交易时间(如20210614)\n");
        collectexchange();
        break;
    case 10:
        printf("请输入交易的二手物品条码号查找交易信息\n");
        findcollect();
        break;
    case 11:
        printf("请输入交易的商品条码来修改交易信息\n");
        changenew();
        break;
    case 12:
        printf("请输入要删除的交易信息的商品条码号\n");
        deletenew();
        break;
    case 0:
        break;
    default:
        printf("请输入正确的数字来选择功能\n");
        break;
    }
    return a;
}
void menu()
{
    printf("*                            菜单选项                                    *\n");
    printf("*                输入1插入,2查找,3修改4删除学生个人信息                  *\n");
    printf("*                输入5上架,6查找,7修改8删除二手物品信息                  *\n");
    printf("*       输入9添加交易信息10查找交易信息11修改交易信息12删除交易信息      *\n");
    printf("*                        输入0退出系统                                   *\n");
}