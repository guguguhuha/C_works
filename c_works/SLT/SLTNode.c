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
        //*pp = NULL;
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
