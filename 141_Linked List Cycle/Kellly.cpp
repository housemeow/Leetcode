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
    bool hasCycle(ListNode *head) {
        ListNode *slow = head,
                 *fast = head;
        
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;
            
            if (fast == slow) {
                return true;
            }
        }
        
        return false;
        
//         set<ListNode*> exists;
        
//         while(head) {
//             if (exists.find(head) != exists.end()) {
//                 return true;
//             }
//             exists.insert(head);
            
//             head = head->next;
//         }
        
//         return false;
    }
};
