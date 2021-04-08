#include "SLTNode.h"
// 强调！！！
//调试请加setbuf(stdout,NULL)!!!

//创建一个新节点
SLTNode *BuySLTNode(DataType Data)
{
    //创建一个可使用的空间
    SLTNode *Node = (SLTNode *) malloc(sizeof(SLTNode));
    Node->data = Data;
    Node->next = NULL;
    return Node;
}

//单链表打印函数
void SLTNodePrint(SLTNode *const p)
{
    //创建一个指针来表示当前的位置
    SLTNode *cur = p;
    if (cur == NULL)//如果传进的值为NULL，说明是个空链表
    {
        printf("该链表中并没有值可供打印！\n");
        return;
    }
    //循环打印 data，不断赋值覆盖
    while (cur != NULL)
    {
        printf("%d -> ", cur->data);
        cur = cur->next;//当前指针指向下一位
    }
    printf("NULL\n");
}

//单链表尾插函数
void SLTNodePushBack(SLTNode **pp, DataType InsertData)
{
    SLTNode *NewNode = BuySLTNode(InsertData);
    if (*pp == NULL)//就说明该链表并无值
    {
        *pp = NewNode;
    }
    else
    {
        //非空就找尾
        SLTNode *cur = *pp;
        while (cur->next != NULL)//找尾
        {
            cur = cur->next;
        }
        //将next指向新建的节点
        cur->next = NewNode;
    }
}

//单链表头插函数
void SLTNodePushFront(SLTNode **p, DataType InsertData)
{
    //新建一个节点
    SLTNode *NewNode = BuySLTNode(InsertData);
    //新建的节点指向头节点
    NewNode->next = *p;
    //将头节点重新赋值
    *p = NewNode;
}

//单链表尾删函数
void SLTNodePopBack(SLTNode **pp)
{
    //指向当前节点
    SLTNode *cur = *pp;
    //指向上一个节点
    SLTNode *prev = NULL;

    //如果没有节点
    if (cur == NULL)
    {
        printf("该单链表以无值可删除！\n");
        //直接退出
        return;
    }
        //如果下一个节点为NULL---也就是只有一个节点
    else if (cur->next == NULL)
    {
        free(cur);
        cur = NULL;
        //置NULL ：该节点删除之后，再无节点，所以置NULL
        *pp = NULL;
    }
    else
    {
        //遍历找最后一个节点
        while (cur->next != NULL)
        {
            prev = cur;
            cur = cur->next;
        }
        free(cur);//释放空间
        cur = NULL;//置NULL
        //删除之后上一个节点变为了最后一个节点，它之后的节点为NULL
        prev->next = NULL;
    }
}

// 单链表查找
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

// 单链表在pos位置之后插入x
void SLTInsertAfter(SLTNode *pos, DataType InsertData)
{
    assert(pos);
    SLTNode *newnode = BuySLTNode(InsertData);
    //新节点接收pos位置的下一个位置
    newnode->next = pos->next;
    //将pos位的下一个设置为 新节点，
    //而新节点的下一个指向又指向原本位置的后一个
    //这样就实现了插入
    pos->next = newnode;
}

// 单链表在pos位置之前插入x
void SLTInsertBefore(SLTNode *pos, DataType InsertData)
{
    assert(pos);

//    SLTNode *newnode = BuySLTNode(InsertData);
//    //新节点接收pos位置的下一个位置
//    newnode->next = pos->next;
//    //将pos位的下一个设置为 新节点，
//    //而新节点的下一个指向又指向原本位置的后一个
//    //这样就实现了插入
//    pos->next = newnode;


    //我们采用后插的方式，在来交换两变量的值
    SLTInsertAfter(pos, InsertData);

    SLTNode *nextnode = pos->next;

    //交换值
    DataType temp = pos->data;
    pos->data = nextnode->data;
    nextnode->data = temp;

    //如果这样写，下一次如果还是这个位置插入
    //那就需要再一次寻找pos的位置
    //因为在这个函数里，我们只是改变了互相的值
}

// 单链表在pos位置之前插入x
void SLTInsertBefore_2(SLTNode **p, SLTNode *pos, DataType InsertData)
{
    assert(pos);
    SLTNode *newnode = BuySLTNode(InsertData);
    //如果是头插
    if (*p == pos)
    {
        newnode->next = pos;
        *p = newnode;
    }
    else
    {
        SLTNode *cur = *p;
        SLTNode *prev = NULL;

        //新节点指向原节点
        newnode->next = pos;

        //遍历找到所插位置的前一个位置
        while (cur != pos)
        {
            prev = cur;
            cur = cur->next;
        }

        //上一个节点指向新节点
        prev->next = newnode;

    }
}

//删除pos位后的数据
void SLTEraseAfter(SLTNode *pos)
{
    assert(pos);
    if (pos->next == NULL)
    {
        //说明后面并没有元素了
        return;
    }
    else
    {
        //创建一个指针指向下一个位置
        SLTNode *next = pos->next;
        //原位置的下一个位置，指向 下一个位置 的下一个位置
        pos->next = next->next;
        //释放内存
        free(next);
        next = NULL;
    }
}

//删除pos位的数据 --- 含有头删
void SLTEraseCur(SLTNode **p, SLTNode *pos)
{
    assert(pos);
    if (*p == pos)
    {
        //说明是头删
        *p = pos->next;
        free(pos);
        pos = NULL;
    }
    else
    {
        //普通位置
        SLTNode *prev = *p;
        SLTNode *cur = *p;
        //找到头一个位置
        while (cur != pos)
        {
            prev = cur;
            cur = cur->next;
        }
        //头一个位置指向下下个位置
        prev->next = pos->next;
        free(pos);
        pos = NULL;
    }

}

//修改pos位的数据
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

//头删
void SLTNodePopFront(SLTNode **p)
{
    if (*p == NULL)
    {
        //如果是空表
        printf("该链表中无值可供删除！\n");
        return;
    }
    else
    {
        SLTNode *next = *p;
        //指向下一个位置
        *p = (*p)->next;
        //释放节点
        free(next);
        next = NULL;//及时置NULL
    }
}
































