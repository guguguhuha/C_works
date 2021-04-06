#include "SLTNode.h"

void test()
{
    SLTNode *list = NULL;
    SLTNodePushBack(&list, 0);
    SLTNodePrint(list);

    SLTNodePushFront(&list,4);
    SLTNodePushFront(&list,4);
    SLTNodePrint(list);

    SLTNodePopBack(&list);
    SLTNodePrint(list);

    SLTNodePopBack(&list);
    SLTNodePrint(list);

    SLTNodePopBack(&list);
    SLTNodePrint(list);

}


int main()
{
    setbuf(stdout,NULL);
    test();
    return 0;
}