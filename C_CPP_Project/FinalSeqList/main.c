#include "test.h"


//测试一
void SeqListTest1() {
    //先来定义一个顺序表变量
    SeqList list;

    //将其地址赋值于 p，我们在修改时，要传 址 进去，这样才可以改变他的值，切不可传 值 进去！
    SeqList *p = &list;

    //对于一个结构体我们在其定义时，是不可以直接赋值进去的
    //如：
    //typedef struct SeqList
    //{
    //
    //    DataType* data = NULL; // 指向动态开辟的数组
    //
    //    size_t size = 0; // 有效数据个数
    //
    //    size_t capacity =1; // 容量空间的大小
    //}SeqList;
    //上述代码是错误示例！！！

    //所以我们要写一个初始化函数
    SeqListInit(p);//传 址 进去

    SeqListPushBack(p, 1);
    SeqListPushBack(p, 2);
    SeqListPushBack(p, 3);
    SeqListPushBack(p, 4);
    SeqListPushBack(p, 5);
    SeqListPrint(p);

    SeqListPushFront(p, 1);
    SeqListPushFront(p, 2);
    SeqListPushFront(p, 3);
    SeqListPushFront(p, 4);
    SeqListPushFront(p, 5);
    SeqListPrint(p);

    SeqListPopBack(p);
    SeqListPopBack(p);
    SeqListPopBack(p);
    SeqListPrint(p);

    SeqListPopFront(p);
    SeqListPopFront(p);
    SeqListPopFront(p);
    SeqListPrint(p);


    SeqListDistory(p);
}

void SeqListTest2() {
    SeqList list;
    SeqList *p = &list;
    SeqListInit(p);

    SeqListPushBack(p, 1);
    SeqListPushBack(p, 2);
    SeqListPushBack(p, 3);
    SeqListPushBack(p, 4);
    SeqListPushBack(p, 5);
    SeqListPrint(p);

    SeqListPushFront(p, 1);
    SeqListPushFront(p, 2);
    SeqListPushFront(p, 3);
    SeqListPushFront(p, 4);
    SeqListPushFront(p, 5);
    SeqListPrint(p);

    SeqListInsert(p, 0, 0);
    SeqListInsert(p, p->size, 0);
    SeqListInsert(p, p->size / 2, 0);
    SeqListInsert(p, p->size / 2 / 2, 0);
    SeqListInsert(p, p->size / 2 + p->size / 2 / 2, 0);
    SeqListPrint(p);

    SeqListErase(p, 0);
    SeqListErase(p, p->size);
    SeqListErase(p, p->size / 2);
    SeqListErase(p, p->size / 2 / 2 - 1);
    SeqListErase(p, p->size / 2 / 2 + p->size / 2);
    SeqListPrint(p);

    SeqListModify(p, 0, 0);
    SeqListModify(p, p->size, 0);
    SeqListModify(p, 4, 0);
    SeqListModify(p, 5, 0);
    SeqListPrint(p);

    SeqListDistory(p);
}

int main() {
    //不放在main函数里写，是为了方便测试
    SeqListTest1();
    SeqListTest2();
    return 0;
}