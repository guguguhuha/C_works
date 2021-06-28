//确保头文件只包含一次
#ifndef FINASLT_SLT_H
#define FINASLT_SLT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <assert.h>


//进行自定义类型，方便修改
typedef int DataType;

//进行自定义数据类型
typedef struct SLTNode
{
    DataType data;//存放数据
    struct SLTNode *next;//指向下一块空间
} SLTNode;

//单链表打印函数
void SLTPrint(SLTNode *p);

//创建节点函数
SLTNode *BuySLTNode(DataType data);

//单链表尾插函数
void SLTPushBack(SLTNode **p, DataType InsertData);

//单链表头插函数
void SLTPushFront(SLTNode **p, DataType InsertData);

//单链表尾删函数
void SLTPopBack(SLTNode **p);

//单链表头删函数
void SLTPopFront(SLTNode **p);

//单链表查找函数
SLTNode *SLTFindNode(SLTNode *p, DataType FindData);

//单链表修改函数
void SLTModify(SLTNode *pos, DataType ModifyData);

//单链表在pos位置之后插入InsertData
void SLTInsertAfter(SLTNode *pos, DataType InsertData);

//单链表在pos位置之前插入InsertData
void SLTInsertBefore(SLTNode **p, SLTNode *pos, DataType InsertData);


//单链表在pos位置之前插入InsertData
void SLTInsertBefore_2( SLTNode *pos, DataType InsertData);

//删除pos位后的数据
void SLTEraseAfter(SLTNode *pos);

//删除pos位的数据 --- 含有头删
void SLTEraseCur(SLTNode **p, SLTNode *pos);

#endif //FINASLT_SLT_H
