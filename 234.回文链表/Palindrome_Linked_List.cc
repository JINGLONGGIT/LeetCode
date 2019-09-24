/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) 
    {
        // 边界条件判断
        if (head == NULL || head->next == NULL)
            return true;
        
        // 利用快慢指针找到链表的中间节点
        ListNode *pFast = head->next->next;
        ListNode *pSlow = head->next;
        while (pFast != NULL && pFast->next != NULL)
        {
            pFast = pFast->next->next;
            pSlow = pSlow->next;
        }
        
        // 逆序链表的前半部分
        ListNode *pre = NULL;
        while (head != pSlow)
        {
            ListNode *ptmp = head->next;
            head->next = pre;
            pre = head;
            head = ptmp;
        }
        
        // 如果是奇数个节点，则去掉后半部分的第一个节点
        if (pFast != NULL)
            pSlow = pSlow->next;
        
        // 比较链表前后两部分
        while (pre != NULL)
        {
            if (pre->val != pSlow->val)
                return false;
            pre = pre->next;
            pSlow = pSlow->next;
        }
        
        return true;
    }
};
