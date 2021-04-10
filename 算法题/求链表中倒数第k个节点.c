//题目描述
//输入一个链表，输出该链表中倒数第k个结点。
//示例1
//输入
//1,{1,2,3,4,5}
//返回值
//{5}
//https://www.nowcoder.com/practice/529d3ae5a407492994ad2a246518148a?tpId=13&tqId=11167&rp=2&ru=%2Factivity%2Foj&qru=%2Fta%2Fcoding-interviews%2Fquestion-ranking&tab=answerKey
/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution
{
public:
    ListNode *FindKthToTail(ListNode *pListHead, unsigned int k)
    {
        //先让fast走k步，然后slow再与fast一起走
        //这样fast与slow就会一直差k步
        //当fast走到尾，slow还需k步才可以走到尾

        ListNode *fast = NULL, *slow = NULL;
        fast = slow = pListHead;

        //先让fast走k步
        while (k--)
        {
            //如果此时fast已到达了尾，就直接返回NULL
            if (fast == NULL)
            {
                return NULL;
            }
            fast = fast->next;
        }

        //slow开始走
        while (fast)
        {
            fast = fast->next;
            slow = slow->next;
        }

        return slow;
    }
};