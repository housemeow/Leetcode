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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* a = headA,
                * b = headB;
        int sizeA = 0,
            sizeB = 0;
        
        while (a) {
            sizeA++;
            a = a->next;
        }
        while (b) {
            sizeB++;
            b = b->next;
        }
        
        a = headA;
        b = headB;
        if (sizeA > sizeB) {
            for(int i = 0; i < sizeA - sizeB; i++) {
                a = a->next;
            }
        } else {
            for (int i = 0; i < sizeB - sizeA; i++) {
                b = b->next;
            }
        }
        
        while(a != b) {
            a = a->next;
            b = b->next;
        }
        
        return a;
//         set<ListNode*> exists;
        
//         while(headA) {
//             exists.insert(headA);
//             headA = headA->next;
//         }
        
//         while(headB) {
//             if (exists.find(headB) != exists.end()) {
//                 return headB;
//             }
            
//             headB = headB->next;
//         }
        
//         return NULL;
    }
};
