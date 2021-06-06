#include "SLTNode.h"

void test()
{
    SLTNode *list = NULL;
    SLTNodePushBack(&list, 0);
    SLTNodePrint(list);

    SLTNodePushFront(&list, 1);
    SLTNodePushFront(&list, 2);
    SLTNodePushFront(&list, 3);
    SLTNodePushFront(&list, 4);
    SLTNodePushFront(&list, 5);
    SLTNodePushFront(&list, 6);
    SLTNodePrint(list);

    SLTNodePopBack(&list);
    SLTNodePrint(list);

    SLTNodePopBack(&list);
    SLTNodePrint(list);

    SLTNodePopBack(&list);
    SLTNodePrint(list);

    SLTNode *pos = SLTFind(list, 5);
    if (pos == NULL)
    {
        printf("未有此数据！\n");
    }
    else
    {
        //改变值为什么不传它的地址呢？
        //pos 现在是 SLTNode* 型
        //而现在函数SLTModify里的参数也是 SLTNode* 型的
        //它俩类型相同，为什么可以把数值改掉？


        //注意：改变指针指向的时候需要传递二级指针
        //     如果是修改指针指向空间中的值，一级指针就可以做的到
        //下来写两个函数就明白了：
        //swap：交换两个整形变量
        //swap：交换两个指针变量
        //把这两个函数实现出来
        //然后自己画图好好想想  就彻底搞清楚什么情况下需要传递二级指针   什么情况下需要传递一级指针

        SLTModify(pos, 100);
        SLTNodePrint(list);
        SLT_Modify(&pos, 1000);
    }

    SLTInsertAfter(pos, 123);
    SLTNodePrint(list);
    SLTInsertBefore(pos, 123);
    SLTNodePrint(list);
    SLTInsertBefore_2(&list, pos, 111);
    SLTInsertBefore_2(&list, SLTFind(list, 6), 111);
    SLTNodePrint(list);

    pos = SLTFind(list, 4);

    SLTEraseAfter(pos);
    SLTNodePrint(list);


    SLTEraseCur(&list, SLTFind(list, 111));
    SLTNodePrint(list);
    SLTEraseCur(&list, SLTFind(list, 6));
    SLTNodePrint(list);
    SLTEraseCur(&list, SLTFind(list, 4));
    SLTNodePrint(list);
    SLTEraseCur(&list, SLTFind(list, 1000));
    SLTNodePrint(list);

    SLTNodePopFront(&list);
    SLTNodePrint(list);

    SLTNodePopFront(&list);
    SLTNodePrint(list);

    SLTNodePopFront(&list);
    SLTNodePrint(list);

    SLTNodePopFront(&list);
    SLTNodePrint(list);
}


int main()
{
    setbuf(stdout, NULL);
    test();

    return 0;
}