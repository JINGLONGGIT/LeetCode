/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

// 迭代
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2)
{
    struct ListNode* result = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* tmp = result;
    
    while (l1 != NULL && l2 != NULL)
    {
        if (l1->val < l2->val)
        {
            tmp->next = l1;
            l1 = l1->next;
        }
        else
        {
            tmp->next = l2;
            l2 = l2->next;
        }
        
        tmp = tmp->next;
    }
    
    tmp->next = l1 == NULL ? l2 : l1;
    
    return result->next;
}
