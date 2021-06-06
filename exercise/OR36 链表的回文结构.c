//OR36 链表的回文结构
//题目描述
//对于一个链表，请设计一个时间复杂度为O(n),额外空间复杂度为O(1)的算法，判断其是否为回文结构。
//
//给定一个链表的头指针A，请返回一个bool值，代表其是否为回文结构。保证链表长度小于等于900。
//
//测试样例：
//1->2->2->1
//返回：true
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
            //找出中间节点 --- 快慢指针
            struct ListNode* fast = A, *slow = A;
            while(fast && fast->next)
            {
                slow = slow->next;
                fast = fast->next->next;
            }
            struct ListNode* MidNode = slow;

            //逆转
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