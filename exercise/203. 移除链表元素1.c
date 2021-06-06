//203. 移除链表元素
//给你一个链表的头节点 head 和一个整数 val ，请你删除链表中所有满足 Node.val == val 的节点，并返回 新的头节点 。
// 
//
//示例 1：
//
//
//输入：head = [1,2,6,3,4,5,6], val = 6
//输出：[1,2,3,4,5]
//示例 2：
//
//输入：head = [], val = 1
//输出：[]
//示例 3：
//
//输入：head = [7,7,7,7], val = 7
//输出：[]
// 
//
//提示：
//
//列表中的节点在范围 [0, 104] 内
//1 <= Node.val <= 50
//0 <= k <= 50
//
//来源：力扣（LeetCode）
//链接：https://leetcode-cn.com/problems/remove-linked-list-elements
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode *removeElements(struct ListNode *head, int val)
{
    // 方法一：直接做
    // if(head==NULL)
    // {
    //     //如果传进是空，直接返回
    //     return NULL;
    // }
    // //因为是删除，所以我们得找到他之前的指针
    // struct ListNode* prev=NULL;
    // struct ListNode* cur=NULL;

    // cur=head;
    // prev=NULL;

    // while(cur)
    // {
    //     if(cur->val==val)//当前的值需要删除
    //     {
    //         struct ListNode* next=cur->next;

    //         if(prev == NULL)//说明头节点就是要删除的值
    //         {
    //         //释放空间
    //         free(cur);
    //         //头指针指向下一个
    //         head=next;
    //         //当前指针指向下一个
    //         cur=next;
    //         }
    //         else//正常情况，普通位置需要删除
    //         {
    //             //之前的指向下下一个
    //             prev->next=next;
    //             free(cur);
    //             cur=next;
    //         }   
    //     }
    //     else//不需要删除该节点
    //     {
    //         prev=cur;
    //         cur=cur->next;
    //     } 
    // }

    // return head;

    //方法二 ---- 带有哨兵位的头节点
    struct ListNode *guardhead = (struct ListNode *) malloc(sizeof(struct ListNode));
    //哨兵位指向头节点
    guardhead->next = head;

    //因为是删除，所以我们得找到他之前的指针
    struct ListNode *prev = NULL;
    struct ListNode *cur = NULL;

    //指向头节点
    cur = head;
    //指向哨兵位
    prev = guardhead;
    printf("1\n");
    while (cur)
    {
        printf("2\n");
        if (cur->val == val)//是要删除的值
        {
            struct ListNode *next = cur->next;
            prev->next = next;
            free(cur);
            cur = next;
        }
        else
        {
            printf("3\n");
            prev = cur;
            cur = cur->next;
        }
    }
    printf("4\n");
    head = guardhead->next;
    free(guardhead);
    printf("5\n");
    return head;
}