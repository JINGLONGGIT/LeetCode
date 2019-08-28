/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* reverseList(struct ListNode* head)
{
    struct ListNode *pre = NULL;

    while (head != NULL)
    {
        // tmp 用于保存下一个节点；head是当前节点
        struct ListNode *tmp = cur->next;
        head->next = pre;
        pre = head;
        head = tmp;
    }

    return pre;
}



