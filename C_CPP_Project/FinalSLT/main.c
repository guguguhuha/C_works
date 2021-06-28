#include "SLT.h"

void test1()
{
    SLTNode *p = NULL;
    SLTPushBack(&p, 0);
    SLTPushBack(&p, 1);
    SLTPushBack(&p, 2);
    SLTPrint(p);

    SLTPushFront(&p, 0);
    SLTPushFront(&p, 1);
    SLTPushFront(&p, 2);
    SLTPrint(p);

    SLTPopBack(&p);
    SLTPrint(p);

    SLTPopFront(&p);
    SLTPrint(p);

    SLTNode *pos = SLTFindNode(p, 1);
    if (pos == NULL)
    {
        printf("该链表中无所查找的值！\n");
    }
    else
    {
        SLTModify(pos,123);
    }
    SLTPrint(p);

    SLTInsertAfter(pos,321);
    SLTPrint(p);

    SLTInsertBefore(&p,pos,000);
    SLTPrint(p);

    SLTInsertBefore_2(SLTFindNode(p,1),666);

    SLTPrint(p);

    SLTEraseAfter(SLTFindNode(p,1));
    SLTEraseAfter(SLTFindNode(p,666));
    SLTEraseCur(&p,SLTFindNode(p,0));
    SLTEraseCur(&p,SLTFindNode(p,123));
    SLTEraseCur(&p,SLTFindNode(p,321));
    SLTEraseCur(&p,SLTFindNode(p,0));
    SLTEraseCur(&p,SLTFindNode(p,0));
    SLTEraseCur(&p,SLTFindNode(p,666));
    SLTPrint(p);

}

int main()
{
    setbuf(stdout, NULL);
    test1();
    return 0;
}


