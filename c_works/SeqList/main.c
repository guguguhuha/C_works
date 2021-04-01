#include "SeqList.h"

void SeqListTest1() {
    SeqList data;
    SeqListInit(&data);
    SeqListPushBack(&data, 1);
    SeqListPushBack(&data, 2);
    SeqListPushBack(&data, 3);
    SeqListPushBack(&data, 4);
    SeqListPushBack(&data, 5);
    SeqListPushBack(&data, 6);
    SeqListPushBack(&data, 7);
    SeqListPrint(&data);

    SeqListPushFront(&data, 0);
    SeqListPushFront(&data, 0);
    SeqListPushFront(&data, 0);
    SeqListPushFront(&data, 0);
    SeqListPrint(&data);

    SeqListPopBack(&data);
    SeqListPopBack(&data);
    SeqListPopBack(&data);
    SeqListPrint(&data);

    SeqListPopFront(&data);
    SeqListPopFront(&data);
    SeqListPopFront(&data);
    SeqListPrint(&data);

    SeqListInsert(&data, 3, 10);
    SeqListInsert(&data, 0, 10);
    SeqListInsert(&data, data.size, 10);
    SeqListPrint(&data);

    SeqListErase(&data, 0);
    SeqListPrint(&data);

    SeqListErase(&data, data.size);
    SeqListPrint(&data);

    SeqListErase(&data, 3);
    SeqListPrint(&data);

    SeqListModify(&data, 0, 100);
    SeqListModify(&data, data.size - 1, 100);
    SeqListPrint(&data);

    SeqListDestory(&data);
}

void SeqListTest2() {
    SeqList data;
    SeqListInit(&data);

    SeqListPushFront(&data, 0);
    SeqListPrint(&data);

    SeqListPushBack(&data, 1);
    SeqListPrint(&data);

    SeqListInsert(&data, 1, 10);
    SeqListInsert(&data, 2, 13);
    SeqListInsert(&data, 3, 10123);
    SeqListInsert(&data, 5, 10213);
    SeqListInsert(&data, 1, 11240);
    SeqListPrint(&data);

    SeqListPopFront(&data);
    SeqListPrint(&data);

    SeqListPopBack(&data);
    SeqListPrint(&data);

    SeqListErase(&data, 1);
    SeqListPrint(&data);

    SeqListDestory(&data);

}

void SeqListTest3() {
    SeqList list;
    SeqList *p = &list;
    SeqListInit(p);

    SeqListPushBack(p, 10);
    SeqListPrint(p);
    SeqListPushFront(p, 0);
    SeqListPrint(p);
    SeqListInsert(p, 1, 1);
    SeqListPrint(p);
    SeqListInsert(p, 2, 2);
    SeqListPrint(p);
    SeqListInsert(p, 3, 3);
    SeqListPrint(p);
    SeqListInsert(p, 4, 4);
    SeqListPrint(p);
    SeqListInsert(p, 5, 5);
    SeqListPrint(p);
    SeqListInsert(p, 6, 6);
    SeqListPrint(p);
    SeqListInsert(p, 7, 7);
    SeqListPrint(p);
    SeqListInsert(p, 8, 8);
    SeqListPrint(p);
    SeqListInsert(p, 9, 9);
    SeqListPrint(p);

    SeqListPopBack(p);
    SeqListPrint(p);

    SeqListPopFront(p);
    SeqListPrint(p);

    SeqListErase(p, 2);
    SeqListPrint(p);
    SeqListErase(p, 5);
    SeqListPrint(p);

    SeqListInsert(p,p->size,789);
    SeqListPrint(p);

    SeqListDestory(p);
}

int main() {
    setbuf(stdout, NULL);
    //SeqListTest1();
//    SeqListTest2();
    SeqListTest3();

    return 0;
}