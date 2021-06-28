#include "SLT.h"

//单链表打印函数
void SLTPrint(SLTNode *p)
{
    if (p == NULL)//如果该链表为空
    {
        printf("该链表中并无值可供打印\n");
        return;//直接退出
    }
    //正常情况下

    //cur指向当前位置
    SLTNode *cur = p;
    while (cur)//如果cur是NULL，循环就停止
    {
        printf("%d -> ", cur->data);
        cur = cur->next;//cur指向下一块空间
    }
    printf("NULL\n");
}

//创建节点函数
SLTNode *BuySLTNode(DataType data)
{
    //动态开辟一块空间
    SLTNode *new_node = (SLTNode *) malloc(sizeof(SLTNode));
    if (new_node == NULL)//如果未开辟成功
    {
        perror("BuyNode Error!");//打印错误信息
        exit(-1);
    }
    else
    {
        //新结点的值为传进来的值
        new_node->data = data;
        new_node->next = NULL;
    }
    //返回新建立的节点
    return new_node;
}

////单链表尾插函数
//void SLTPushBack(SLTNode *p, DataType InsertData)
//{
//    //创建一个新节点
//    SLTNode *new_node = BuySLTNode(InsertData);
//    if (p == NULL)//说明该链表为空
//    {
//        p = new_node;
//    }
//    else//非空就找尾
//    {
//        SLTNode *cur = p;
//        while (cur->next)//循环遍历找尾，注意在这，我们的循环条件为cur->next，而非cur
//            // 因为我们要用最后一个节点的next
//            // 否则，若是cur的话，就直接走到NULL了，我们无法给将一个节点加在它上面
//        {
//            cur = cur->next;//指向下一个
//        }
//        cur->next = new_node;//尾插
//    }
//}

//单链表尾插函数
void SLTPushBack(SLTNode **p, DataType InsertData)
{
    //创建一个新节点
    SLTNode *new_node = BuySLTNode(InsertData);
    if (*p == NULL)//说明该链表为空
    {
        *p = new_node;//改变p的指向
    }
    else//非空就找尾
    {
        SLTNode *cur = *p;
        while (cur->next)//循环遍历找尾，注意在这，我们的循环条件为cur->next，而非cur
            // 因为我们要用最后一个节点的next
            // 否则，若是cur的话，就直接走到NULL了，我们无法给将一个节点加在它上面
        {
            cur = cur->next;//指向下一个
        }
        cur->next = new_node;//尾插
    }
}

//单链表头插函数
void SLTPushFront(SLTNode **p, DataType InsertData)
{
    SLTNode *new_node = BuySLTNode(InsertData);//创建新节点

    //在头插中，并不关心*p为不为空，反正最后它们的处理都是一样的

    //将原链表内容连接在new_node上
    new_node->next = *p;
    //改变指向
    *p = new_node;
}

//单链表尾删函数
void SLTPopBack(SLTNode **p)
{
    if (*p == NULL)//表示该链表为空
    {
        printf("该链表中并无值可供删除！\n");
        return;
    }
    else if ((*p)->next == NULL)//表示该链表中只有一个值，删除之后就为空
    {
        free(*p);//释放空间
        *p = NULL;//置为NULL；
    }
    else
    {
        //循环遍历找尾
        SLTNode *cur = *p;//指向当前位置
        SLTNode *prev = NULL;//指向前一个位置
        while (cur->next)
        {
            prev = cur;
            cur = cur->next;
        }
        free(cur);//释放空间
        cur = NULL;//及时置NULL
        //删除之后prev便是最后一个节点了
        prev->next = NULL;
    }
}

//单链表头删函数
void SLTPopFront(SLTNode **p)
{
    if (*p == NULL)//表示该链表为空
    {
        printf("该链表中并无值可供删除！\n");
        return;
    }
    else
    {
        SLTNode *pop_node = *p;//指向头节点
        *p = (*p)->next;//指向下一个元素
        free(pop_node);//释放空间
        pop_node = NULL;//及时置NULL
    }
}

//单链表查找函数
SLTNode *SLTFindNode(SLTNode *p, DataType FindData)
{
    assert(p);//确保传进来的指针不为空
    SLTNode *cur = p;
    while (cur)
    {
        if (cur->data == FindData)
        {
            return cur;//找到就返回该节点的地址
        }
        cur = cur->next;//循环遍历
    }
    return NULL;//找不到就返回NULL
}

//单链表修改函数
void SLTModify(SLTNode *pos, DataType ModifyData)
{
    assert(pos);//确保pos不为空
    pos->data = ModifyData;//修改
}

//单链表在pos位置之后插入InsertData
void SLTInsertAfter(SLTNode *pos, DataType InsertData)
{
    assert(pos);//保证pos不为NULL
    SLTNode *new_node = BuySLTNode(InsertData);//创建一个新节点
    //该节点的下一个指向原本该位置的下一个
    new_node->next = pos->next;
    //该位置的下一个就是new_node
    pos->next = new_node;
}

//单链表在pos位置之前插入InsertData
void SLTInsertBefore(SLTNode **p, SLTNode *pos, DataType InsertData)
{
    assert(pos);
    SLTNode *new_node = BuySLTNode(InsertData);
    if (pos == *p)//这就说明是第一个位置前插入
    {
        //头插
        new_node->next = *p;
        *p = new_node;
    }
    else
    {
        SLTNode *cur = *p;
        SLTNode *prev = NULL;
        //新节点的下一个指向这个位置
        new_node->next = pos;
        //循环遍历找到它的前一个位置
        while (cur != pos)
        {
            prev = cur;
            cur = cur->next;
        }
        //前一个位置指向新节点
        prev->next = new_node;
    }
}

//单链表在pos位置之前插入InsertData
void SLTInsertBefore_2(SLTNode *pos, DataType InsertData)
{
    assert(pos);

    SLTNode *new_node = BuySLTNode(InsertData);
    new_node->next = pos->next;
    pos->next = new_node;
    //进行了一个后插

    //交换这两个变量的值
    DataType tmp = pos->data;
    pos->data = new_node->data;
    new_node->data = tmp;
}

//删除pos位后的数据
void SLTEraseAfter(SLTNode *pos)
{
    assert(pos);
    if (pos->next == NULL)
    {
        //说明后面并没有元素了
        printf("该位置后无数据可以删除\n");
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
