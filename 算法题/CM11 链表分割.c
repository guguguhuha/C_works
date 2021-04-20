//CM11 ����ָ�
//��Ŀ����
//����һ�����ͷָ�� ListNode* pHead����һ��ֵx��
// ��дһ�δ��뽫����С��x�Ľ������������֮ǰ���Ҳ��ܸı�ԭ��������˳�򣬷����������к�������ͷָ��
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
            //�����ݷ�Ϊ����
            //���������������
            struct ListNode *lessHead, *lessTail, *greaterHead, *greaterTail;
            greaterHead = (struct ListNode *) malloc(sizeof(struct ListNode));
            greaterTail = greaterHead;
            lessHead = (struct ListNode *) malloc(sizeof(struct ListNode));
            lessTail = lessHead;
            lessTail->next = NULL;
            greaterTail->next = NULL;

            struct ListNode *cur = pHead;

            while (cur)//��������
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

            //����
            greaterTail->next = NULL;
            lessTail->next = greaterHead->next;
            pHead = lessHead->next;

            free(lessHead);
            free(greaterHead);

            return pHead;
        }
};