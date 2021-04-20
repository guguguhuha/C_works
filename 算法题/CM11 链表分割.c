//CM11 链表分割
//题目描述
//现有一链表的头指针 ListNode* pHead，给一定值x，
// 编写一段代码将所有小于x的结点排在其余结点之前，且不能改变原来的数据顺序，返回重新排列后的链表的头指针
//https://www.nowcoder.com/practice/0e27e0b064de4eacac178676ef9c9d70?tpId=8&tqId=11004&rp=2&ru=%2Factivity%2Foj&qru=%2Fta%2Fcracking-the-coding-interview%2Fquestion-ranking&tab=answerKey
/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};*/

class Partition{
        public:
        ListNode * partition(ListNode * pHead, int x) {

            if (pHead == NULL)
            {
                return NULL;
            }
            //将数据分为两组
            //最后再来连接起来
            struct ListNode *lessHead, *lessTail, *greaterHead, *greaterTail;
            greaterHead = (struct ListNode *) malloc(sizeof(struct ListNode));
            greaterTail = greaterHead;
            lessHead = (struct ListNode *) malloc(sizeof(struct ListNode));
            lessTail = lessHead;
            lessTail->next = NULL;
            greaterTail->next = NULL;

            struct ListNode *cur = pHead;

            while (cur)//迭代分组
            {
                if (cur->val < x)
                {
                    lessTail->next = cur;
                    lessTail = lessTail->next;
                }
                else
                {
                    greaterTail->next = cur;
                    greaterTail = greaterTail->next;
                }
                cur = cur->next;
            }

            //连接
            greaterTail->next = NULL;
            lessTail->next = greaterHead->next;
            pHead = lessHead->next;

            free(lessHead);
            free(greaterHead);

            return pHead;
        }
};