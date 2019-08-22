/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

// 解法一
struct ListNode* removeElements(struct ListNode* head, int val)
{   
    // 链表为空
    if (head == NULL)
    {
        return NULL;
    }
    
    // 判断头结点是否是要删除的节点
    while (head->val == val)
    {
        head = head->next;
        
        if (head == NULL)
        {
            return NULL;
        }
    }
    
    struct ListNode *p = head;
    while (p->next != NULL)
    {
        if (p->next->val == val)
        {
            p->next = p->next->next;
        }
        else
        {
            p = p->next;
        }
    }
    
    return head;
}

// 解法二：
struct ListNode* removeElements(struct ListNode* head, int val)
{
    // 异常判断
    if (head == NULL)
    {
        return head;
    }
    
	// 头结点
    struct ListNode *pre = (struct ListNode *)malloc(sizeof(struct ListNode));
    pre->next = head;
    head = pre;
    
    while (head->next != NULL)
    {
        if (head->next->val == val)
        {
            head->next = head->next->next;
        }
        else 
        {
            head = head->next;
        }
    }
    
    return pre->next;
}

// 解法三：
struct ListNode *removeElements(struct ListNode *head, int val)
{
	struct ListNode *p = (struct ListNode *)malloc(sizeof(struct ListNode));
	p->next = head;
	struct ListNode *pre = p;
	
	while (p->next != NULL)
	{
		if (p->next->val == val)
			p->next = p->next->next;
		else
			p = p->next;
	}
	
	return pre->next;
}