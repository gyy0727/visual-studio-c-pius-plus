#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void recordstu(struct student s);//��ѧ����Ϣд���ļ�
void collectstu();//����ѧ����Ϣ
void searchstu(struct student s);//����ѧ����Ϣ
void stuname();//����ѧ��ѧ��
void stuchanged();//�����޸ĺ�ѧ����Ϣ
void changestu(struct student s);//�޸�ѧ����Ϣ
void stuchange();//����ѧ��ѧ��
void studelete();//����ѧ��ѧ��
void deleted(struct student s);//ɾ��ѧ����Ϣ
void booknumber();//���������Ʒ����
void collectbook();//���������Ʒ��Ϣ
void recordstub1(struct book s);//��������Ʒ��Ϣд���ļ�
void searchbook(struct book s);//���Ҷ�����Ʒ��Ϣ
void bookchange();//���������Ʒ����
void changebook(struct book s);//�޸Ķ�����Ʒ��Ϣ
void bookdelete();//������Ҫɾ���Ķ�����Ʒ������
void bookdeleted(struct book s);//ɾ��������Ʒ��Ϣ
void collectexchange();//����Ҫ�޸ĵĶ�����Ʒ��Ϣ
void exchangeadd(struct exchange s);//д�뽻����Ϣ
void findcollect();//���뽻����Ʒ���
void found(struct exchange s);//���ҽ�����Ϣ
void changenew();//����Ҫ���ĵĽ�����Ϣ�Ķ�����Ʒ�ı��
void changenews(struct exchange s);//���Ľ�����Ϣ
void deletenew();//����Ҫɾ���Ľ�����Ϣ�е���Ʒ���
void deletenews(struct exchange s);//ɾ��������Ϣ
int ability(int a);//���ܺ���
void menu();//��ӡ�˵�
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
//������д���ļ�
struct exchange
{
    char name1[20];
    char name2[20];
    double bianhao;
    double time;
};
