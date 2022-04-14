#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
	char name[1000];
	double age;
	int cla;
};
void write(struct student s)
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
};
void read(struct student s)
{

    int i = 0;
    struct student k[10] = { 0 };//用来下面读写文件的时候存数据
    FILE* fp = fopen("stu.dat", "a+");
    fseek(fp, 0L, SEEK_END);
    int size = ftell(fp);
    printf("size=%d\n", size);
    rewind(fp);
   
    fread(&k[i], sizeof(struct student), size/1016, fp);
    
    for (i = 0; i < 6; i++)
    {
        
           
            printf("%s,%1.0lf,%d\n", k[i].name, k[i].age, k[i].cla);
            
        
    }
    printf("\n");
   
    for (i = 0; i < 6; i++)
    {
        if (s.age==k[i].age)
        {
            printf("%s,%1.0lf,%d\n", k[i].name, k[i].age, k[i].cla);
            break;

        }
       

    }
    printf("\n");
    fclose(fp);
    printf("若显示学生信息则为查找成功, 否则为查找失败, 你已成功回到菜单请输入数字选择功能\n");
    fclose(fp);
}
void dill()
{
    
    double b, c;
    printf("请输入数据\n");
    scanf("%lf",&b);
    struct student s = { 0 };
    s.age = b;

    read(s);
}
int main()
{
	struct student s = { "zhangho",12,14 };
	struct student v = { "hechu",127,2304 };
    struct student m = { "lilon",123,2834 };
    struct student j = { "hbqi",142,24 };
    struct student k = { "hkaih",192,2934 };
    struct student y = { "jnjih",15,834 };
    struct student l = { "hkaih" };
	/*write(s);
	write(v);
    write(j);
    write(k);
    write(m);
    write(y);*/
    dill();
	
	return 0;
}