#include "SeqList.h"

void SeqListTest1()
{
    SeqList data;
    SeqListInit(&data);
    SeqListPushBack(&data,1);
    SeqListPushBack(&data,2);
    SeqListPushBack(&data,3);
    SeqListPushBack(&data,4);
    SeqListPushBack(&data,5);
    SeqListPushBack(&data,6);
    SeqListPushBack(&data,7);
    SeqListPrint(&data);

    SeqListPushFront(&data,0);
    SeqListPushFront(&data,0);
    SeqListPushFront(&data,0);
    SeqListPushFront(&data,0);
    SeqListPrint(&data);

    SeqListPopBack(&data);
    SeqListPopBack(&data);
    SeqListPopBack(&data);
    SeqListPrint(&data);

    SeqListPopFront(&data);
    SeqListPopFront(&data);
    SeqListPopFront(&data);
    SeqListPrint(&data);

    SeqListInsert(&data,3,10);
    SeqListInsert(&data,0,10);
    SeqListInsert(&data,data.size,10);
    SeqListPrint(&data);

    SeqListErase(&data,0);
    SeqListPrint(&data);

    SeqListErase(&data,data.size);
    SeqListPrint(&data);

    SeqListErase(&data,3);
    SeqListPrint(&data);

    SeqListModify(&data,0,100);
    SeqListModify(&data,data.size-1,100);
    SeqListPrint(&data);
}

void SeqListTest2()
{
    SeqList data;
    SeqListInit(&data);

    SeqListPushFront(&data,0);
    SeqListPrint(&data);

    SeqListPushBack(&data,1);
    SeqListPrint(&data);

    SeqListInsert(&data,1,10);
    SeqListInsert(&data,1,10);
    SeqListPrint(&data);

    SeqListPopFront(&data);
    SeqListPrint(&data);

    SeqListPopBack(&data);
    SeqListPrint(&data);

    SeqListErase(&data,1);
    SeqListPrint(&data);

}

int main()
{
    //SeqListTest1();
    SeqListTest2();
    return 0;
}