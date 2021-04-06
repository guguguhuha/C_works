//确保文件只包含一次
#ifndef TEST_SLTNODE_H
#define TEST_SLTNODE_H

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef int DataType;

typedef struct Node
{
    DataType data;
    struct Node *next;

} SLTNode;

//单链表打印函数
void SLTNodePrint(SLTNode *p);

//单链表尾插函数
void SLTNodePushBack(SLTNode **pp, DataType InsertData);

//单链表头插函数
void SLTNodePushFront(SLTNode **pp, DataType InsertData);

//单链表尾删函数
void SLTNodePopBack(SLTNode** pp);


#endif //TEST_SLTNODE_H
