#include"����.h"
int ability(int a)
{
    switch (a)
    {
    case 1:
        printf("������ѧ������,,�༶,ѧ���Բ�����Ϣ\n");
        collectstu();
        break;
    case 2:
        printf("������ѧ��ѧ���Բ�����Ϣ\n");
        stuname();
        break;
    case 3:
        printf("������ѧ��ѧ�����޸���Ϣ\n");
        stuchange();
        break;
    case 4:
        printf("������ѧ��ѧ����ɾ��ѧ����Ϣ\n");
        studelete();
        break;
    case 5:
        printf("�����������Ʒ����Ʒ��,��Ʒ����,�۸�(Ԫ)���ϼ���Ʒ\n");
        collectbook();
        break;
    case 6:
        printf("�����������Ʒ���������\n");
        booknumber();
        break;
    case 7:
        printf("�����������Ʒ���������޸���Ϣ\n");
        bookchange();
        break;
    case 8:
        printf("��������Ҫ�¼ܵĶ�����Ʒ������\n");
        bookdelete();
        break;
    case 9:
        printf("�����뽻�׵���������������,������Ʒ�������źͽ���ʱ��(��20210614)\n");
        collectexchange();
        break;
    case 10:
        printf("�����뽻�׵Ķ�����Ʒ����Ų��ҽ�����Ϣ\n");
        findcollect();
        break;
    case 11:
        printf("�����뽻�׵���Ʒ�������޸Ľ�����Ϣ\n");
        changenew();
        break;
    case 12:
        printf("������Ҫɾ���Ľ�����Ϣ����Ʒ�����\n");
        deletenew();
        break;
    case 0:
        break;
    default:
        printf("��������ȷ��������ѡ����\n");
        break;
    }
    return a;
}
void menu()
{
    printf("*                            �˵�ѡ��                                    *\n");
    printf("*                ����1����,2����,3�޸�4ɾ��ѧ��������Ϣ                  *\n");
    printf("*                ����5�ϼ�,6����,7�޸�8ɾ��������Ʒ��Ϣ                  *\n");
    printf("*       ����9��ӽ�����Ϣ10���ҽ�����Ϣ11�޸Ľ�����Ϣ12ɾ��������Ϣ      *\n");
    printf("*                        ����0�˳�ϵͳ                                   *\n");
}