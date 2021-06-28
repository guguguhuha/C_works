//ȷ��ͷ�ļ�ֻ����һ��
#ifndef FINASLT_SLT_H
#define FINASLT_SLT_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <assert.h>


//�����Զ������ͣ������޸�
typedef int DataType;

//�����Զ�����������
typedef struct SLTNode
{
    DataType data;//�������
    struct SLTNode *next;//ָ����һ��ռ�
} SLTNode;

//�������ӡ����
void SLTPrint(SLTNode *p);

//�����ڵ㺯��
SLTNode *BuySLTNode(DataType data);

//������β�庯��
void SLTPushBack(SLTNode **p, DataType InsertData);

//������ͷ�庯��
void SLTPushFront(SLTNode **p, DataType InsertData);

//������βɾ����
void SLTPopBack(SLTNode **p);

//������ͷɾ����
void SLTPopFront(SLTNode **p);

//��������Һ���
SLTNode *SLTFindNode(SLTNode *p, DataType FindData);

//�������޸ĺ���
void SLTModify(SLTNode *pos, DataType ModifyData);

//��������posλ��֮�����InsertData
void SLTInsertAfter(SLTNode *pos, DataType InsertData);

//��������posλ��֮ǰ����InsertData
void SLTInsertBefore(SLTNode **p, SLTNode *pos, DataType InsertData);


//��������posλ��֮ǰ����InsertData
void SLTInsertBefore_2( SLTNode *pos, DataType InsertData);

//ɾ��posλ�������
void SLTEraseAfter(SLTNode *pos);

//ɾ��posλ������ --- ����ͷɾ
void SLTEraseCur(SLTNode **p, SLTNode *pos);

#endif //FINASLT_SLT_H
