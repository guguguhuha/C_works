#include "Contact.h"

void menu()
{
    //��ӡ�˵�
    printf("******************************************\n");
    printf("******      1.add       2.del       ******\n");
    printf("******      3.search    4.modify    ******\n");
    printf("******      5.show      6.sort      ******\n");
    printf("******      7.help      0.exit      ******\n");
    printf("******************************************\n");
}

void test()
{
    Contact list;//����һ��ͨѶ¼
    Contact *p = &list;//��ַ

    //��ʼ��
    ContactInit(p);
    int input = 0;//����û�ѡ�����Ϣ
    do
    {
        menu();
        printf("���������ѡ��>");
        scanf("%d", &input);
        switch (input)
        {
            case ADD:
                ContactAdd(p);
                break;
            case DEL:
                ContactDel(p);
                break;
            case SEARCH:
                ContactSearch(p);
                break;
            case MODIFY:
                ContactModify(p);
                break;
            case SHOW:
                ContactShow(p);
                break;
            case SORT:
                ContactSort(p);
                break;
            case HELP:
                ContactHelp(p);
                break;
            case EXIT:
                ContactExit(p);
                break;
            default:
                printf("����Ƿ���\n");
        }
    } while (input);

}

void test2()
{
    Contact list;//����һ��ͨѶ¼
    Contact *p = &list;//��ַ
    //��ʼ��
    ContactInit(p);
    //��һ������ָ����������ź���ָ��
    void (*fun[])(Contact *) ={ContactExit,
                               ContactAdd,
                               ContactDel,
                               ContactSearch,
                               ContactModify,
                               ContactShow,
                               ContactSort,
                               ContactHelp};
    int input = 0;//����û�ѡ�����Ϣ
    do{
        menu();
        printf("���������ѡ��>");
        scanf("%d", &input);
        if(input>=0&&input<=sizeof(fun))
        {
            //system("cls");
            fun[input](p);

        }
        else
        {
            system("cls");
            printf("����Ƿ����������룡\n");
        }
    }while(input);
}

int main()
{
    //test();
    test2();

    return 0;
}

