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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (l1 == NULL) {
            return l2;
        } else if (l2 == NULL) {
            return l1;
        }
        
        ListNode *head = NULL,
                 *end = NULL;
        
        
        while(l1 || l2) {
            ListNode* node;
            
            if (l1 && l2 && l1->val < l2->val ||
                l1 &&!l2)
            {
                node = new ListNode(l1->val);
                l1 = l1->next;
            } else {
                node = new ListNode(l2->val);
                l2 = l2->next;
            }
            
            if (head) {
                end->next = node;
            } else {
                head = node;
            }
            
            end = node;
        }
        
        return head;
    }
};
