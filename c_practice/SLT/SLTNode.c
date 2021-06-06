#include "SLTNode.h"
// ǿ��������
//�������setbuf(stdout,NULL)!!!

//����һ���½ڵ�
SLTNode *BuySLTNode(DataType Data)
{
    //����һ����ʹ�õĿռ�
    SLTNode *Node = (SLTNode *) malloc(sizeof(SLTNode));
    Node->data = Data;
    Node->next = NULL;
    return Node;
}

//�������ӡ����
void SLTNodePrint(SLTNode *const p)
{
    //����һ��ָ������ʾ��ǰ��λ��
    SLTNode *cur = p;
    if (cur == NULL)//���������ֵΪNULL��˵���Ǹ�������
    {
        printf("�������в�û��ֵ�ɹ���ӡ��\n");
        return;
    }
    //ѭ����ӡ data�����ϸ�ֵ����
    while (cur != NULL)
    {
        printf("%d -> ", cur->data);
        cur = cur->next;//��ǰָ��ָ����һλ
    }
    printf("NULL\n");
}

//������β�庯��
void SLTNodePushBack(SLTNode **pp, DataType InsertData)
{
    SLTNode *NewNode = BuySLTNode(InsertData);
    if (*pp == NULL)//��˵����������ֵ
    {
        *pp = NewNode;
    }
    else
    {
        //�ǿվ���β
        SLTNode *cur = *pp;
        while (cur->next != NULL)//��β
        {
            cur = cur->next;
        }
        //��nextָ���½��Ľڵ�
        cur->next = NewNode;
    }
}

//������ͷ�庯��
void SLTNodePushFront(SLTNode **p, DataType InsertData)
{
    //�½�һ���ڵ�
    SLTNode *NewNode = BuySLTNode(InsertData);
    //�½��Ľڵ�ָ��ͷ�ڵ�
    NewNode->next = *p;
    //��ͷ�ڵ����¸�ֵ
    *p = NewNode;
}

//������βɾ����
void SLTNodePopBack(SLTNode **pp)
{
    //ָ��ǰ�ڵ�
    SLTNode *cur = *pp;
    //ָ����һ���ڵ�
    SLTNode *prev = NULL;

    //���û�нڵ�
    if (cur == NULL)
    {
        printf("�õ���������ֵ��ɾ����\n");
        //ֱ���˳�
        return;
    }
        //�����һ���ڵ�ΪNULL---Ҳ����ֻ��һ���ڵ�
    else if (cur->next == NULL)
    {
        free(cur);
        cur = NULL;
        //��NULL ���ýڵ�ɾ��֮�����޽ڵ㣬������NULL
        *pp = NULL;
    }
    else
    {
        //���������һ���ڵ�
        while (cur->next != NULL)
        {
            prev = cur;
            cur = cur->next;
        }
        free(cur);//�ͷſռ�
        cur = NULL;//��NULL
        //ɾ��֮����һ���ڵ��Ϊ�����һ���ڵ㣬��֮��Ľڵ�ΪNULL
        prev->next = NULL;
    }
}

// ���������
SLTNode *SLTFind(SLTNode *p, DataType SearchData)
{
    assert(p);
    SLTNode *cur = p;
    while (cur)
    {
        if (cur->data == SearchData)
        {
            return cur;
        }
        else
        {
            cur = cur->next;
        }
    }
    return NULL;
}

// ��������posλ��֮�����x
void SLTInsertAfter(SLTNode *pos, DataType InsertData)
{
    assert(pos);
    SLTNode *newnode = BuySLTNode(InsertData);
    //�½ڵ����posλ�õ���һ��λ��
    newnode->next = pos->next;
    //��posλ����һ������Ϊ �½ڵ㣬
    //���½ڵ����һ��ָ����ָ��ԭ��λ�õĺ�һ��
    //������ʵ���˲���
    pos->next = newnode;
}

// ��������posλ��֮ǰ����x
void SLTInsertBefore(SLTNode *pos, DataType InsertData)
{
    assert(pos);

//    SLTNode *newnode = BuySLTNode(InsertData);
//    //�½ڵ����posλ�õ���һ��λ��
//    newnode->next = pos->next;
//    //��posλ����һ������Ϊ �½ڵ㣬
//    //���½ڵ����һ��ָ����ָ��ԭ��λ�õĺ�һ��
//    //������ʵ���˲���
//    pos->next = newnode;


    //���ǲ��ú��ķ�ʽ������������������ֵ
    SLTInsertAfter(pos, InsertData);

    SLTNode *nextnode = pos->next;

    //����ֵ
    DataType temp = pos->data;
    pos->data = nextnode->data;
    nextnode->data = temp;

    //�������д����һ������������λ�ò���
    //�Ǿ���Ҫ��һ��Ѱ��pos��λ��
    //��Ϊ��������������ֻ�Ǹı��˻����ֵ
}

// ��������posλ��֮ǰ����x
void SLTInsertBefore_2(SLTNode **p, SLTNode *pos, DataType InsertData)
{
    assert(pos);
    SLTNode *newnode = BuySLTNode(InsertData);
    //�����ͷ��
    if (*p == pos)
    {
        newnode->next = pos;
        *p = newnode;
    }
    else
    {
        SLTNode *cur = *p;
        SLTNode *prev = NULL;

        //�½ڵ�ָ��ԭ�ڵ�
        newnode->next = pos;

        //�����ҵ�����λ�õ�ǰһ��λ��
        while (cur != pos)
        {
            prev = cur;
            cur = cur->next;
        }

        //��һ���ڵ�ָ���½ڵ�
        prev->next = newnode;

    }
}

//ɾ��posλ�������
void SLTEraseAfter(SLTNode *pos)
{
    assert(pos);
    if (pos->next == NULL)
    {
        //˵�����沢û��Ԫ����
        return;
    }
    else
    {
        //����һ��ָ��ָ����һ��λ��
        SLTNode *next = pos->next;
        //ԭλ�õ���һ��λ�ã�ָ�� ��һ��λ�� ����һ��λ��
        pos->next = next->next;
        //�ͷ��ڴ�
        free(next);
        next = NULL;
    }
}

//ɾ��posλ������ --- ����ͷɾ
void SLTEraseCur(SLTNode **p, SLTNode *pos)
{
    assert(pos);
    if (*p == pos)
    {
        //˵����ͷɾ
        *p = pos->next;
        free(pos);
        pos = NULL;
    }
    else
    {
        //��ͨλ��
        SLTNode *prev = *p;
        SLTNode *cur = *p;
        //�ҵ�ͷһ��λ��
        while (cur != pos)
        {
            prev = cur;
            cur = cur->next;
        }
        //ͷһ��λ��ָ�����¸�λ��
        prev->next = pos->next;
        free(pos);
        pos = NULL;
    }

}

//�޸�posλ������
void SLTModify(SLTNode *pos, DataType ModifyData)
{
    assert(pos);
    pos->data = ModifyData;
}

void SLT_Modify(SLTNode **pos, DataType ModifyData)
{
    assert(pos);
    (*pos)->data = ModifyData;
}

//ͷɾ
void SLTNodePopFront(SLTNode **p)
{
    if (*p == NULL)
    {
        //����ǿձ�
        printf("����������ֵ�ɹ�ɾ����\n");
        return;
    }
    else
    {
        SLTNode *next = *p;
        //ָ����һ��λ��
        *p = (*p)->next;
        //�ͷŽڵ�
        free(next);
        next = NULL;//��ʱ��NULL
    }
}
































