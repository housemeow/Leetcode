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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* node = NULL;
        ListNode* lastNode = NULL;
        ListNode* l1node = l1;
        ListNode* l2node = l2;
        bool over = false;
        
        while(l1node != NULL || l2node != NULL) {
            int value = 0;
            if (l1node != NULL) {
                value += l1node->val;
                l1node = l1node->next;
            }
            if (l2node != NULL) {
                value += l2node->val;
                l2node = l2node->next;
            }
            
            if (over) {
                value += 1;
                over = false;
            }
            
            if (value >= 10) {
                over = true;
                value -= 10;
            }
                
            if (node == NULL) {
                lastNode = node = new ListNode(value);
            } else {
                lastNode->next = new ListNode(value);
                lastNode = lastNode->next;
            }
        }
        
        if (over) {
            lastNode->next = new ListNode(1);
            lastNode = lastNode->next;
        }
        
        return node;
    }
};
