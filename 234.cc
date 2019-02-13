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
    ListNode *temp;
    bool isPalindrome(ListNode* head) {
        temp = head;
        return check(head);
    }
    bool check(ListNode *item) {
        if(item == NULL)
            return true;
        bool result = check(item -> next) && (item->val == temp->val);
        temp = temp -> next;
        return result;
    }
};
