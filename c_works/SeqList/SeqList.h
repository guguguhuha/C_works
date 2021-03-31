
#ifndef SEQLIST_SEQLIST_H
#define SEQLIST_SEQLIST_H

#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <assert.h>

typedef int datatype;

typedef struct SeqList
{
    datatype* data;
    int size;
    int capacity;
}SeqList;

//顺序表初始化
void SeqListInit(SeqList* p);

//打印顺序表
void SeqListPrint(SeqList* p);

//销毁顺序表
void SeqListDestory(SeqList* p);

//尾插
void SeqListPushBack(SeqList* p,datatype InsertData);

//头插
void SeqListPushFront(SeqList* p,datatype InsertedData);

//尾删
void SeqListPopBack(SeqList* p);

//头删
void SeqListPopFront(SeqList* p);

//任意位置插入
void SeqListInsert(SeqList* p,int pos,datatype InsertData);

//任意位置删除
void SeqListErase(SeqList* p,int pos);

//修改
void SeqListModify(SeqList* p,int pos,datatype ModifyData);












#endif //SEQLIST_SEQLIST_H
