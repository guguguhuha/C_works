
#include "SeqList.h"
// 强调！！！
//调试请加setbuf(stdout,NULL)!!!


//检查容量
void CheckCapacity(SeqList *p) {
    if (p->size == p->capacity || p->size == 0) {
        datatype *ptr = (datatype *) realloc(p->data, sizeof(datatype) * ((p->capacity) * 2));
        if (ptr == NULL) {
            perror("REALLOC ERROR!");
            exit(-1);
        }
        p->data = ptr;
        p->capacity *= 2;
    }

}

void SeqListInit(SeqList *p) {
    assert(p);
    p->data = NULL;
    p->size = 0;
    p->capacity = 1;
}

void SeqListPrint(SeqList *p) {
    assert(p);
    int i = 0;
    for (i = 0; i < p->size; i++) {
        printf("%d ", p->data[i]);
    }
    printf("\n");
}

void SeqListDestory(SeqList *p) {
    assert(p);
    free(p->data);
}

void SeqListPushBack(SeqList *p, datatype InsertedData) {
//    assert(p);
//    CheckCapacity(p);
//    p->data[p->size] = InsertedData;
//    p->size++;

    SeqListInsert(p, p->size, InsertedData);
}

void SeqListPushFront(SeqList *p, datatype InsertedData) {
//    assert(p);
//    CheckCapacity(p);
//    int i = 0;
//    for (i = 0; i < p->size; i++) {
//        p->data[p->size - i] = p->data[p->size - i - 1];
//    }
//    p->data[0] = InsertedData;
//    p->size++;

    SeqListInsert(p, 0, InsertedData);

}

void SeqListPopBack(SeqList *p) {
//    assert(p);
//    p->size--;

    SeqListErase(p, p->size);
}

void SeqListPopFront(SeqList *p) {
//    assert(p);
//    int i = 0;
//    for (i = 0; i < p->size; i++) {
//        p->data[i] = p->data[i + 1];
//    }
//    p->size--;

    SeqListErase(p, 0);
}


void SeqListInsert(SeqList *p, int pos, datatype InsertData) {
    assert(p);
    assert(pos <= p->size);
    assert(pos >= 0);

    CheckCapacity(p);
    int i = 0;
    for (i = p->size + 1; i > pos; i--) {
        p->data[i] = p->data[i - 1];
    }
    p->data[pos] = InsertData;
    p->size++;
}

void SeqListErase(SeqList *p, int pos) {
    assert(p);
    assert(pos <= p->size);
    assert(pos >= 0);
    int i = 0;
    for (i = pos; i < p->size; i++) {
        p->data[i] = p->data[i + 1];
    }
    p->size--;
}

void SeqListModify(SeqList *p, int pos, datatype ModifyData) {
    assert(p);
    p->data[pos] = ModifyData;
}

int SeqListFind(SeqList *p, datatype SearchNum) {
    assert(p);
    int i = 0;
    for (i = 0; i < p->size; i++) {
        if (p->data[i] == SearchNum) {
            return i;//找到就返回下标
        }
    }
    return -1;//找不到就返回 -1
}
