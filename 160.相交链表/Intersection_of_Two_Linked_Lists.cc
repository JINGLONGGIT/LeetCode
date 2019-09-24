/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

// 解法一：双指针
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        while (headA == NULL || headB == NULL)
            return NULL;
        
        ListNode *ptmpA = headA;
        ListNode *ptmpB = headB;
        
        while (ptmpA != ptmpB)
        {
            ptmpA = ptmpA == NULL ? headB : ptmpA->next;
            ptmpB = ptmpB == NULL ? headA : ptmpB->next;
        }
        
        return ptmpA;
    }
};

// 解法二
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        if (headA == NULL || headB == NULL)
            return NULL;
        
        int i32SizeA = 0;
        int i32SizeB = 0;
        ListNode *tmpA = headA;
        ListNode *tmpB = headB;
        
        // 计算链表的长度
        while (tmpA != NULL)
        {
            tmpA = tmpA->next;
            i32SizeA++;
        }
        
        while (tmpB != NULL)
        {
            tmpB = tmpB->next;
            i32SizeB++;
        }
        
        // 比较两个链表的长度，并将长链表向后移动至两个链表长度相等
        while (i32SizeA > i32SizeB)
        {
            headA = headA->next;
            i32SizeA--;
        }
        
        while (i32SizeB > i32SizeA)
        {
            headB = headB->next;
            i32SizeB--;
        }
        
        // 找到相交的节点
        while (headA != headB)
        {
            headA = headA->next;
            headB = headB->next;
        }
        
        return headA;
    }
};