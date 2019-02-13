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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL)
            return head;
        if(head->val == val)
            return removeElements(head->next, val);
        
        ListNode* p = head;
        if(p->next == NULL)
        {
            return head;
        }
        while(p)
        {
            if(p->next && p->next->val == val)
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
};
