//21. �ϲ�������������
//��������������ϲ�Ϊһ���µ� ���� �������ء���������ͨ��ƴ�Ӹ�����������������нڵ���ɵġ�
//
//
//
//ʾ�� 1��
//
//
//���룺l1 = [1,2,4], l2 = [1,3,4]
//�����[1,1,2,3,4,4]
//ʾ�� 2��
//
//���룺l1 = [], l2 = []
//�����[]
//ʾ�� 3��
//
//���룺l1 = [], l2 = [0]
//�����[0]
//
//
//��ʾ��
//
//��������Ľڵ���Ŀ��Χ�� [0, 50]
//-100 <= Node.val <= 100
//l1 �� l2 ���� �ǵݼ�˳�� ����
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
    //�����һ��Ϊ�գ��ͷ�����һ��
    if (l1 == NULL)
    {
        return l2;
    }
    if (l2 == NULL)
    {
        return l1;
    }

    //����һ��ͷ
    struct ListNode *head = NULL;
    //�Ƚ���Ӧ��Сֵ��С�Ľ���
    struct ListNode *cur_1 = l1;
    struct ListNode *cur_2 = l2;

    //��ͷ
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
    //����
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