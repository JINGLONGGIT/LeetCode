/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    
    struct ListNode* ListCur = head;
    struct ListNode* ListPre = NULL;
    struct ListNode* ListNext = NULL;
    
    while (ListCur != NULL)
    {
        ListNext = ListCur->next;
        ListCur->next = ListPre;
        ListPre = ListCur;
        ListCur = ListNext;
    }
    
    head = ListPre;
    
    return head;
}

