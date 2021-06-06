//反转一个单链表。
//
//示例:
//
//输入: 1->2->3->4->5->NULL
//输出: 5->4->3->2->1->NULL
//进阶:
//你可以迭代或递归地反转链表。你能否用两种方法解决这道题？
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/reverse-linked-list
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode *reverseList(struct ListNode *head)
{
    // //采用头插
    // struct ListNode* cur = head;
    // struct ListNode* newhead = NULL;

    // while(cur)
    // {
    //     struct ListNode* next = cur->next;

    //     //下一位指向新的头节点，接着上一轮循环
    //     next = newhead;

    //     //使得新的头节点指向下一个位置
    //     newhead = cur;

    //     //迭代
    //     cur = next;
    // }
    // return newhead;
    //三指针
    //如果就一个或者没有，就直接返回原来的值
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    struct ListNode *n1 = NULL, *n2 = head, *n3 = head->next;
    while (n2)
    {
        //翻转---指向前面的位置
        n2->next = n1;

        //迭代
        n1 = n2;
        n2 = n3;

        //保证当n3为NULL的时候，不会再往后探索
        if (n3)
        {
            n3 = n3->next;
        }
    }
    return n1;
}