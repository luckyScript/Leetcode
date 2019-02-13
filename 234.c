/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *temp;
bool check(struct ListNode* item) {
    if(item == NULL)
        return true;
    bool result = check(item->next) && (item->val == temp->val);
    temp = temp->next;
    return result;
}
bool isPalindrome(struct ListNode* head) {    
    temp = head;
    return check(head);
}
