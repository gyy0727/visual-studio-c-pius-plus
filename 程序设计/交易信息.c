#include"����.h"
void collectexchange()
{
    void exchangeadd(struct exchange s);
    char a[20];
    char b[20];
    double c;
    double d;
    scanf("%s %s %lf %lf", a, b, &c, &d);
    struct exchange s;
    strcpy(s.name1, a);
    strcpy(s.name2, b);
    s.bianhao = c;
    s.time = d;
    exchangeadd(s);
};
void exchangeadd(struct exchange s)
{
    FILE* fp;
    fopen_s(&fp, "exchange.dat", "a+");
    if (fp == NULL)
    {
        printf("��ʧ��\n");
    }
    fwrite(&s, sizeof(struct exchange), 1, fp);
    fclose(fp);
    fp = NULL;
    printf("������Ϣ����ɹ�,�ѻص��˵�,�������������ѡ����\n");
}
void findcollect()
{

    double a;
    scanf("%lf", &a);
    struct exchange s;
    s.bianhao = a;
    found(s);
}
void found(struct exchange s)
{
    int i = 0;
    struct exchange k[100] = { 0 };//���������д�ļ���ʱ�������
    FILE* fp = fopen("exchange.dat", "a+");
    fseek(fp, 0L, SEEK_END);
    int size = ftell(fp);
    rewind(fp);
    for (i = 0; i < size / 56; i++)
    {
        fread(&k[i], sizeof(struct exchange), 1, fp);
    }
    for (i = 0; i < size / 56; i++)
    {
        if (s.bianhao == k[i].bianhao)
        {
            printf("���ҳɹ�,����:\n");
            printf("\n");
            printf("%s,%s,%1.0lf,%1.0lf", k[i].name1, k[i].name2, k[i].bianhao, k[i].time);
        }
    }
    printf("\n");
    printf(" ����ʾ������Ϣ��Ϊ���ҳɹ�, ����Ϊ����ʧ��, ���ѳɹ��ص��˵�,����������ѡ����\n");
    fclose(fp);
    fp = NULL;
}
void changenew()
{
    void changenews(struct exchange s);
    double a;
    scanf("%lf", &a);
    struct exchange s;
    s.bianhao = a;
    changenews(s);
}
void changenews(struct exchange s)
{
    int i = 0;
    struct exchange k[100] = { 0 };//���������д�ļ���ʱ�������
    FILE* fp = fopen("exchange.dat", "a+");
    fseek(fp, 0L, SEEK_END);
    int size = ftell(fp);
    rewind(fp);
    for (i = 0; i < size / 56; i++)
    {
        fread(&k[i], sizeof(struct exchange), 1, fp);
    }
    printf("�������޸ĺ��׵���ϢΪ(�����û�1������,�����û�2������,������Ʒ�ı��,����ʱ��)\n");
    char a[20];
    char b[20];
    double d, c;

    scanf("%s %s %lf %lf", a, b, &c, &d);
    for (i = 0; i < size / 56; i++)
    {
        if (s.bianhao == k[i].bianhao)
        {
            strcpy(k[i].name1, a);
            strcpy(k[i].name2, b);
            k[i].bianhao = c;
            k[i].time = d;
        }
    }
    fclose(fp);
    fp = NULL;
    FILE* fpp = fopen("exchange.dat", "w");
    fwrite(k, sizeof(struct exchange), size / 56, fpp);
    printf("\n");
    printf(" �޸ĳɹ�, ���ѳɹ��ص��˵�,����������ѡ����\n");
    fclose(fpp);
    fpp = NULL;
}
void deletenew()
{
    void deletenews(struct exchange s);
    double a;
    struct exchange s;
    scanf("%lf", &a);
    s.bianhao = a;
    deletenews(s);
}
void deletenews(struct exchange s)
{
    int i = 0;
    struct exchange k[100] = { 0 };//���������д�ļ���ʱ�������
    FILE* fp = fopen("exchange.dat", "a+");
    fseek(fp, 0L, SEEK_END);
    int size = ftell(fp);
    rewind(fp);
    for (i = 0; i < size / 56; i++)
    {
        fread(&k[i], sizeof(struct exchange), 1, fp);
    }
    for (i = 0; i < size / 56; i++)
    {
        if (s.bianhao == k[i].bianhao)
        {

            strcpy(k[i].name1, "0");
            strcpy(k[i].name2, "0");
            k[i].bianhao = 0;
            k[i].time = 0;
        }
    }
    fclose(fp);
    fp = NULL;
    FILE* fpp = fopen("exchange.dat", "w");
    fwrite(k, sizeof(struct exchange), size / 56, fpp);
    printf("\n");
    printf(" ɾ���ɹ�, ���ѳɹ��ص��˵�,����������ѡ����\n");
    fclose(fpp);
    fpp = NULL;
}