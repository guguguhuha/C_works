// 强调！！！
//调试请加setbuf(stdout,NULL)!!!

#include "test.h"

//扩容函数
void CheckCapacity(SeqList *p) {
    assert(p);
    //如果容量于数据个数相同就扩容,还有一种情况p->size=0的时候也需要扩容
    //1.p->size = p->capacity 的时候，这时如果我们要插入数据，容量不够，造成非法访问
    //2.p->size = 0的时候，这时说明我们刚刚初始化完成，此时的p->data还是NULL，我们不能直接对于NULL进行解引用和修改
    if (p->size == p->capacity || p->size == 0) {
        //扩容扩大先前容量的两倍
        DataType *ptr = (DataType *) realloc(p->data, sizeof(DataType) * (p->capacity * 2));
        if (ptr == NULL) {
            //错误提示，下面两个效果相同
            //printf("REALLOC ERROR!:%s",strerror(errno));
            perror("REALLOC ERROR！\n");
            exit(-1);
        }
        //赋值，realloc可在原地址开辟，也可在一个新的地址开辟，我们用p原接收回来
        p->data = ptr;
        //容量扩大两倍
        p->capacity *= 2;
    }
    //不需要扩容就什么也不干
}

void SeqListPrint(SeqList *p) {
    assert(p);
    int i = 0;
    for (i = 0; i < p->size; i++) {
        printf("%d ", p->data[i]);
    }
    printf("\n");
}

void SeqListDistory(SeqList *p) {
    assert(p);
    free(p->data);
}

void SeqListInit(SeqList *p) {
    //传地址进来的时候要记得断言，要保证它不为NULL，不然会造成非法访问等错误
    assert(p);

    // 指向动态开辟的数组
    p->data = NULL;

    // 有效数据个数
    p->size = 0;

    // 容量空间的大小
    p->capacity = 1;

}

void SeqListPushBack(SeqList *p, DataType InsertData) {
//    assert(p);
//    //检查是否需要扩容
//    CheckCapacity(p);
//    //尾插就是在末尾插入，即p->size的位置插入数据
//    p->data[p->size]=InsertData;
//    //插完之后数据个数加一
//    p->size++;
    SeqListInsert(p, p->size, InsertData);
}

void SeqListPushFront(SeqList *p, DataType InsertData) {
//    assert(p);
//    //检查是否需要扩容
//    CheckCapacity(p);
//    //头插，我们需要先将数据从后往前移
//    int i =0;
//    for(i=p->size+1;i>0;i--)
//    {
//        //从后往前依次挪动
//        p->data[i]=p->data[i-1];
//    }
//    //挪完以后数据数首位置插入
//    p->data[0]=InsertData;
//    //插入之后数据加一
//    p->size++;
    SeqListInsert(p, 0, InsertData);
}

void SeqListPopBack(SeqList *p) {
//    assert(p);
//    //如果p->size=0 说明就没有数据可供删除
//    assert(p->size>0);
//    //因为是尾删，所以我们可以直接让 p->size - 1即可，不需要其他操作
//    p->size--;
    SeqListErase(p, p->size);
}

void SeqListPopFront(SeqList *p) {
//    assert(p);
//    //如果p->size=0 说明就没有数据可供删除
//    assert(p->size>0);
//    //头删，我们采取从前往后移
//    int i =0;
//    for(i=0;i<p->size;i++)
//    {
//        //从前往后依次挪动
//        p->data[i]=p->data[i+1];
//    }
//    //删除之后数据减一
//    p->size--;
    SeqListErase(p, 0);
}

void SeqListInsert(SeqList *p, int pos, DataType InsertData) {
    assert(p);
    //确保插入的位置有效
    assert(pos >= 0);
    assert(pos <= p->size);
    //检查容量
    CheckCapacity(p);

    int i = 0;
    //到 pos 位停止
    for (i = p->size + 1; i > pos; i--) {
        //从后往前移
        p->data[i] = p->data[i - 1];
    }
    //在pos位插入数据
    p->data[pos] = InsertData;
    //插入之后数据数加一
    p->size++;
}

void SeqListErase(SeqList *p, int pos) {
    assert(p);
    //确保删除的位置有效
    assert(pos >= 0);
    assert(pos <= p->size);

    int i = 0;
    for (i = pos; i < p->size; i++) {
        //从前往后依次挪动
        p->data[i] = p->data[i + 1];
    }
    //删除之后数据减一
    p->size--;
}

void SeqListModify(SeqList *p, int pos, DataType ModifyData) {
    assert(p);
    //确保修改的位置有效
    assert(pos >= 0);
    assert(pos <= p->size);
    //在pos位进行修改
    p->data[pos] = ModifyData;
}

int SeqListFind(SeqList *p, DataType SearchData) {
    assert(p);
    int i = 0;
    for (i = 0; i < p->size; i++) {
        if (p->data[i] == SearchData) {
            //找到就返回下标
            return i;
        }
    }
    //找不到就返回-1
    return -1;
}