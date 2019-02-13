/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
  ListNode* addTwoNumbers(ListNode *l1, ListNode *l2) {
    ListNode l3(0), *pointer = &l3;
    int up = 0;

    while (l1 || l2) {
      pointer->next = new ListNode(pointer->val); 
      pointer = pointer->next;
      pointer->val=0;
      if(l1) {
        pointer->val+= (l1->val + up);
        l1 = l1->next;
        up = 0;
      }
      if(l2) {
        pointer->val+= (l2->val + up);
        l2 = l2->next;
        up= 0;
      }
      up = pointer->val/10;
      pointer->val = pointer->val%10;
    }
    if (up > 0) {
      pointer->next = new ListNode(up);
    }
    return l3.next;
  }
};
