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
void SLTNodePopBack(SLTNode **pp);

//头删
void SLTNodePopFront(SLTNode **pp);

// 单链表查找
SLTNode *SLTFind(SLTNode *plist, DataType);

// 单链表在pos位置之后插入x
void SLTInsertAfter(SLTNode *pos, DataType);

// 单链表在pos位置之前插入x
void SLTInsertBefore(SLTNode *pos, DataType);

//单链表在pos位置之前插入x --- 可能有头插
void SLTInsertBefore_2(SLTNode **, SLTNode *pos, DataType);

//删除pos位后的数据
void SLTEraseAfter(SLTNode *pos);


//删除pos位的数据--- 可能有头删
void SLTEraseCur(SLTNode **p, SLTNode *pos);

//修改pos位的数据
void SLTModify(SLTNode *pos, DataType);

void SLT_Modify(SLTNode **pos, DataType);


#endif //TEST_SLTNODE_H
