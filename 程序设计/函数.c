#include"����.h"
void recordstu(struct student s)
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
    printf("ѧ������ɹ�,�ѻص��˵�,�������������ѡ����\n");
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
}//����ѧ����Ϣ
void searchstu(struct student s)//����ѧ����Ϣ
{
    int i = 0;
    struct student k[100] = { 0 };//���������д�ļ���ʱ�������
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
            printf("���ҳɹ�,����:\n");
            printf("\n");
            printf("%s,%d,%1.0lf", k[i].name, k[i].cla, k[i].xiehao);
            break;
        }
    }
    printf("\n");

    printf(" ����ʾѧ����Ϣ��Ϊ���ҳɹ�, ����Ϊ����ʧ��, ���ѳɹ��ص��˵�,����������ѡ����\n");
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
};//����ѧ��ѧ�Ų�����
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
    struct student k[100] = { 0 };//���������д�ļ���ʱ�������
    FILE* fp = fopen("stu.dat", "a+");
    fseek(fp, 0L, SEEK_END);
    int size = ftell(fp);
    rewind(fp);
    for (i = 0; i < size / 32; i++)
    {
        fread(&k[i], sizeof(struct student), 1, fp);
    }
    printf("�������޸ĺ�ѧ������ϢΪ(����,�༶,ѧ��)\n");
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
    printf(" �޸ĳɹ�, ���ѳɹ��ص��˵�,����������ѡ����\n");
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
    struct student k[100] = { 0 };//���������д�ļ���ʱ�������
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
    printf(" ɾ���ɹ�, ���ѳɹ��ص��˵�,����������ѡ����\n");
    fclose(fpp);
    fpp = NULL;
}


