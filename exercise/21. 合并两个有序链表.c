//21. 合并两个有序链表
//将两个升序链表合并为一个新的 升序 链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。
//
//
//
//示例 1：
//
//
//输入：l1 = [1,2,4], l2 = [1,3,4]
//输出：[1,1,2,3,4,4]
//示例 2：
//
//输入：l1 = [], l2 = []
//输出：[]
//示例 3：
//
//输入：l1 = [], l2 = [0]
//输出：[0]
//
//
//提示：
//
//两个链表的节点数目范围是 [0, 50]
//-100 <= Node.val <= 100
//l1 和 l2 均按 非递减顺序 排列
//https://leetcode-cn.com/problems/merge-two-sorted-lists/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode *mergeTwoLists(struct ListNode *l1, struct ListNode *l2)
{
    //如果有一个为空，就返回另一个
    if (l1 == NULL)
    {
        return l2;
    }
    if (l2 == NULL)
    {
        return l1;
    }

    //创建一个头
    struct ListNode *head = NULL;
    //比较相应的小值，小的接上
    struct ListNode *cur_1 = l1;
    struct ListNode *cur_2 = l2;

    //找头
    if (cur_1->val < cur_2->val)
    {
        head = cur_1;
        cur_1 = cur_1->next;
    }
    else
    {
        head = cur_2;
        cur_2 = cur_2->next;
    }

    struct ListNode *tail = guard;
    //迭代
    while (cur_1 && cur_2)
    {
        if (cur_1->val > cur_2->val)
        {
            tail->next = cur_2;
            cur_2 = cur_2->next;
        }
        else
        {
            tail->next = cur_1;
            cur_1 = cur_1->next;
        }

        tail = tail->next;
    }

    if (cur_1)
    {
        tail->next = cur_1;
    }
    else
    {
        tail->next = cur_2;
    }

    return head;
}