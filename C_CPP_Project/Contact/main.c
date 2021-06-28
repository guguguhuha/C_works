#include "Contact.h"

void menu()
{
    //打印菜单
    printf("******************************************\n");
    printf("******      1.add       2.del       ******\n");
    printf("******      3.search    4.modify    ******\n");
    printf("******      5.show      6.sort      ******\n");
    printf("******      7.help      0.exit      ******\n");
    printf("******************************************\n");
}

void test()
{
    Contact list;//定义一个通讯录
    Contact *p = &list;//赋址

    //初始化
    ContactInit(p);
    int input = 0;//存放用户选择的信息
    do
    {
        menu();
        printf("请输入你的选择：>");
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
                printf("输入非法！\n");
        }
    } while (input);

}

void test2()
{
    Contact list;//定义一个通讯录
    Contact *p = &list;//赋址
    //初始化
    ContactInit(p);
    //用一个函数指针数组来存放函数指针
    void (*fun[])(Contact *) ={ContactExit,
                               ContactAdd,
                               ContactDel,
                               ContactSearch,
                               ContactModify,
                               ContactShow,
                               ContactSort,
                               ContactHelp};
    int input = 0;//存放用户选择的信息
    do{
        menu();
        printf("请输入你的选择：>");
        scanf("%d", &input);
        if(input>=0&&input<=sizeof(fun))
        {
            //system("cls");
            fun[input](p);

        }
        else
        {
            system("cls");
            printf("输入非法，请检查输入！\n");
        }
    }while(input);
}

int main()
{
    //test();
    test2();

    return 0;
}

