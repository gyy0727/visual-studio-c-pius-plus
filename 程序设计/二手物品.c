#include"����.h"
void booknumber()
{
    void searchbook(struct book s);
    double a;
    scanf("%lf", &a);
    struct book s = { 0 };
    s.number = a;
    searchbook(s);
};//�����鼮����Ų�����
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
};//�ռ�Ҫ������鼮��Ϣ
void recordstub1(struct book s)
{
    FILE* fp;
    fopen_s(&fp, "book.dat", "a+");
    if (fp == NULL)
    {
        printf("��ʧ��\n");
    }
    fwrite(&s, sizeof(struct book), 1, fp);
    fclose(fp);
    fp = NULL;
    printf("\n");
    printf("������Ʒ��Ϣ����ɹ�,�ѻص��˵�,�������������ѡ����\n");
};
void searchbook(struct book s)
{
    int i = 0;
    struct book k[100] = { 0 };//���������д�ļ���ʱ�������
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
            printf("���ҳɹ�,����(�鼮��,����,�۸�:\n");
            printf("\n");
            printf("%s,%1.0lf,%d", k[i].name, k[i].number, k[i].price);
            break;
        }
    }
    printf("\n");
    printf(" ����ʾ������Ʒ��Ϣ��Ϊ���ҳɹ�, ����Ϊ����ʧ��, ���ѳɹ��ص��˵�,����������ѡ����\n");
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
    struct book k[100] = { 0 };//���������д�ļ���ʱ�������
    FILE* fp = fopen("book.dat", "a+");
    fseek(fp, 0L, SEEK_END);
    int size = ftell(fp);
    rewind(fp);
    for (i = 0; i < size / 40; i++)
    {
        fread(&k[i], sizeof(struct book), 1, fp);
    }
    printf("�������޸ĺ������Ʒ����ϢΪ(����,������,�۸�)\n");
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
    printf(" �޸ĳɹ�, ���ѳɹ��ص��˵�,����������ѡ����\n");
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
    struct book k[100] = { 0 };//���������д�ļ���ʱ�������
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
    printf(" ɾ���ɹ�, ���ѳɹ��ص��˵�,����������ѡ����\n");
    fclose(fpp);
    fpp = NULL;
}