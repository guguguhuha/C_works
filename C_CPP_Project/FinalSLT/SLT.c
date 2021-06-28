#include "SLT.h"

//�������ӡ����
void SLTPrint(SLTNode *p)
{
    if (p == NULL)//���������Ϊ��
    {
        printf("�������в���ֵ�ɹ���ӡ\n");
        return;//ֱ���˳�
    }
    //���������

    //curָ��ǰλ��
    SLTNode *cur = p;
    while (cur)//���cur��NULL��ѭ����ֹͣ
    {
        printf("%d -> ", cur->data);
        cur = cur->next;//curָ����һ��ռ�
    }
    printf("NULL\n");
}

//�����ڵ㺯��
SLTNode *BuySLTNode(DataType data)
{
    //��̬����һ��ռ�
    SLTNode *new_node = (SLTNode *) malloc(sizeof(SLTNode));
    if (new_node == NULL)//���δ���ٳɹ�
    {
        perror("BuyNode Error!");//��ӡ������Ϣ
        exit(-1);
    }
    else
    {
        //�½���ֵΪ��������ֵ
        new_node->data = data;
        new_node->next = NULL;
    }
    //�����½����Ľڵ�
    return new_node;
}

////������β�庯��
//void SLTPushBack(SLTNode *p, DataType InsertData)
//{
//    //����һ���½ڵ�
//    SLTNode *new_node = BuySLTNode(InsertData);
//    if (p == NULL)//˵��������Ϊ��
//    {
//        p = new_node;
//    }
//    else//�ǿվ���β
//    {
//        SLTNode *cur = p;
//        while (cur->next)//ѭ��������β��ע�����⣬���ǵ�ѭ������Ϊcur->next������cur
//            // ��Ϊ����Ҫ�����һ���ڵ��next
//            // ��������cur�Ļ�����ֱ���ߵ�NULL�ˣ������޷�����һ���ڵ����������
//        {
//            cur = cur->next;//ָ����һ��
//        }
//        cur->next = new_node;//β��
//    }
//}

//������β�庯��
void SLTPushBack(SLTNode **p, DataType InsertData)
{
    //����һ���½ڵ�
    SLTNode *new_node = BuySLTNode(InsertData);
    if (*p == NULL)//˵��������Ϊ��
    {
        *p = new_node;//�ı�p��ָ��
    }
    else//�ǿվ���β
    {
        SLTNode *cur = *p;
        while (cur->next)//ѭ��������β��ע�����⣬���ǵ�ѭ������Ϊcur->next������cur
            // ��Ϊ����Ҫ�����һ���ڵ��next
            // ��������cur�Ļ�����ֱ���ߵ�NULL�ˣ������޷�����һ���ڵ����������
        {
            cur = cur->next;//ָ����һ��
        }
        cur->next = new_node;//β��
    }
}

//������ͷ�庯��
void SLTPushFront(SLTNode **p, DataType InsertData)
{
    SLTNode *new_node = BuySLTNode(InsertData);//�����½ڵ�

    //��ͷ���У���������*pΪ��Ϊ�գ�����������ǵĴ�����һ����

    //��ԭ��������������new_node��
    new_node->next = *p;
    //�ı�ָ��
    *p = new_node;
}

//������βɾ����
void SLTPopBack(SLTNode **p)
{
    if (*p == NULL)//��ʾ������Ϊ��
    {
        printf("�������в���ֵ�ɹ�ɾ����\n");
        return;
    }
    else if ((*p)->next == NULL)//��ʾ��������ֻ��һ��ֵ��ɾ��֮���Ϊ��
    {
        free(*p);//�ͷſռ�
        *p = NULL;//��ΪNULL��
    }
    else
    {
        //ѭ��������β
        SLTNode *cur = *p;//ָ��ǰλ��
        SLTNode *prev = NULL;//ָ��ǰһ��λ��
        while (cur->next)
        {
            prev = cur;
            cur = cur->next;
        }
        free(cur);//�ͷſռ�
        cur = NULL;//��ʱ��NULL
        //ɾ��֮��prev�������һ���ڵ���
        prev->next = NULL;
    }
}

//������ͷɾ����
void SLTPopFront(SLTNode **p)
{
    if (*p == NULL)//��ʾ������Ϊ��
    {
        printf("�������в���ֵ�ɹ�ɾ����\n");
        return;
    }
    else
    {
        SLTNode *pop_node = *p;//ָ��ͷ�ڵ�
        *p = (*p)->next;//ָ����һ��Ԫ��
        free(pop_node);//�ͷſռ�
        pop_node = NULL;//��ʱ��NULL
    }
}

//��������Һ���
SLTNode *SLTFindNode(SLTNode *p, DataType FindData)
{
    assert(p);//ȷ����������ָ�벻Ϊ��
    SLTNode *cur = p;
    while (cur)
    {
        if (cur->data == FindData)
        {
            return cur;//�ҵ��ͷ��ظýڵ�ĵ�ַ
        }
        cur = cur->next;//ѭ������
    }
    return NULL;//�Ҳ����ͷ���NULL
}

//�������޸ĺ���
void SLTModify(SLTNode *pos, DataType ModifyData)
{
    assert(pos);//ȷ��pos��Ϊ��
    pos->data = ModifyData;//�޸�
}

//��������posλ��֮�����InsertData
void SLTInsertAfter(SLTNode *pos, DataType InsertData)
{
    assert(pos);//��֤pos��ΪNULL
    SLTNode *new_node = BuySLTNode(InsertData);//����һ���½ڵ�
    //�ýڵ����һ��ָ��ԭ����λ�õ���һ��
    new_node->next = pos->next;
    //��λ�õ���һ������new_node
    pos->next = new_node;
}

//��������posλ��֮ǰ����InsertData
void SLTInsertBefore(SLTNode **p, SLTNode *pos, DataType InsertData)
{
    assert(pos);
    SLTNode *new_node = BuySLTNode(InsertData);
    if (pos == *p)//���˵���ǵ�һ��λ��ǰ����
    {
        //ͷ��
        new_node->next = *p;
        *p = new_node;
    }
    else
    {
        SLTNode *cur = *p;
        SLTNode *prev = NULL;
        //�½ڵ����һ��ָ�����λ��
        new_node->next = pos;
        //ѭ�������ҵ�����ǰһ��λ��
        while (cur != pos)
        {
            prev = cur;
            cur = cur->next;
        }
        //ǰһ��λ��ָ���½ڵ�
        prev->next = new_node;
    }
}

//��������posλ��֮ǰ����InsertData
void SLTInsertBefore_2(SLTNode *pos, DataType InsertData)
{
    assert(pos);

    SLTNode *new_node = BuySLTNode(InsertData);
    new_node->next = pos->next;
    pos->next = new_node;
    //������һ�����

    //����������������ֵ
    DataType tmp = pos->data;
    pos->data = new_node->data;
    new_node->data = tmp;
}

//ɾ��posλ�������
void SLTEraseAfter(SLTNode *pos)
{
    assert(pos);
    if (pos->next == NULL)
    {
        //˵�����沢û��Ԫ����
        printf("��λ�ú������ݿ���ɾ��\n");
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
