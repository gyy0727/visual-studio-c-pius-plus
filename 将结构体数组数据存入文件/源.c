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
        printf("��ʧ��\n");
    }
    fwrite(&s, sizeof(struct student), 1, fp);
    fclose(fp);
    fp = NULL;
};
void read(struct student s)
{

    int i = 0;
    struct student k[10] = { 0 };//���������д�ļ���ʱ�������
    FILE* fp = fopen("stu.dat", "a+");
    fseek(fp, 0L, SEEK_END);
    int size = ftell(fp);
    printf("size=%d\n", size);
    rewind(fp);

    fread(&k[i], sizeof(struct student), size / 1016, fp);

    for (i = 0; i < 6; i++)
    {


        printf("%s,%1.0lf,%d\n", k[i].name, k[i].age, k[i].cla);


    }
    printf("\n");

    for (i = 0; i < 6; i++)
    {
        if (s.age == k[i].age)
        {
            printf("%s,%1.0lf,%d\n", k[i].name, k[i].age, k[i].cla);
            break;

        }


    }
    printf("\n");
    fclose(fp);
    printf("����ʾѧ����Ϣ��Ϊ���ҳɹ�, ����Ϊ����ʧ��, ���ѳɹ��ص��˵�����������ѡ����\n");
    fclose(fp);
}
void dill()
{

    double b, c;
    printf("����������\n");
    scanf("%lf", &b);
    struct student s = { 0 };
    s.age = b;

    read(s);
}
int main()
{
    struct student s[4] = { {"zhao",12 ,23},{"qian",34,36},{"sun",54,43},{"li",57,89} };
   /* for(int i=0;i<4;i++)
    { 
        write(s[i]);
    }*/
    for (int i = 0; i < 4; i++)
    {
        read(s[i]);
    }

    return 0;
}