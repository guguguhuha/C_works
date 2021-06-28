//保证编译时只包含一次，防止重复包含
#ifndef TEST_TEST_H
#define TEST_TEST_H

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <assert.h>

//将int作为我们的数据类型，若有改变我们多数情况下只需改变这一行即可，即将int改为别的数据类型
typedef int DataType;

//将结构体重命名，是为了方便使用
typedef struct SeqList {

    DataType *data; // 指向动态开辟的数组

    size_t size; // 有效数据个数

    size_t capacity; // 容量空间的大小
} SeqList;

//顺序表初始化函数
void SeqListInit(SeqList *p);

//打印内容
void SeqListPrint(SeqList *p);

//销毁函数
void SeqListDistory(SeqList *p);

//尾插
void SeqListPushBack(SeqList *p, DataType InsertData);

//头插
void SeqListPushFront(SeqList *p, DataType InsertData);

//尾删
void SeqListPopBack(SeqList *p);

//头删
void SeqListPopFront(SeqList *p);

//任意位置插入
void SeqListInsert(SeqList *p, int pos, DataType InsertData);

//任意位置删除
void SeqListErase(SeqList *p, int pos);

//修改
void SeqListModify(SeqList *p, int pos, DataType ModifyData);


#endif //TEST_TEST_H
