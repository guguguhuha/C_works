//OR36 ����Ļ��Ľṹ
//��Ŀ����
//����һ�����������һ��ʱ�临�Ӷ�ΪO(n),����ռ临�Ӷ�ΪO(1)���㷨���ж����Ƿ�Ϊ���Ľṹ��
//
//����һ�������ͷָ��A���뷵��һ��boolֵ���������Ƿ�Ϊ���Ľṹ����֤������С�ڵ���900��
//
//����������
//1->2->2->1
//���أ�true
//https://www.nowcoder.com/practice/d281619e4b3e4a60a2cc66ea32855bfa?tpId=49&tqId=29370&rp=1&ru=%2Factivity%2Foj&qru=%2Fta%2F2016test%2Fquestion-ranking&tab=answerKey
/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};*/
class PalindromeList {
        public:
        bool chkPalindrome(ListNode* A) {
            // write code here
            if(A->next == NULL )
            {
                return true;
            }
            if(A == NULL)
            {
                return false;
            }
            //�ҳ��м�ڵ� --- ����ָ��
            struct ListNode* fast = A, *slow = A;
            while(fast && fast->next)
            {
                slow = slow->next;
                fast = fast->next->next;
            }
            struct ListNode* MidNode = slow;

            //��ת
            struct ListNode* cur = MidNode;
            struct ListNode* newnode = NULL;
            while(cur)
            {
                struct ListNode* next = cur->next;
                cur->next = newnode;
                newnode = cur;

                cur = next;
            }

            MidNode = newnode;
            while(A && MidNode)
            {
                if(A->val == MidNode->val)
                {
                    A = A->next;
                    MidNode = MidNode->next;
                }
                else
                {
                    return false;
                }
            }
            return true;
        }
};