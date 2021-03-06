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
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head) {
            return head;
        }
        
        ListNode* p = head;
        
        while (p) {
            if (!p->next || p->val != p->next->val) {
                p = p->next;
            } else {
                p->next = p->next->next;
            }
        }
        
        return head;
    }
};
