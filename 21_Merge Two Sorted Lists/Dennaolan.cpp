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
        ListNode* node = NULL;
        return connect( l1, l2, node );
    }
    
private:
    ListNode* connect( ListNode* l1, ListNode* l2, ListNode* node ) {
        
        if ( node == NULL ) {
          if ( l1 != NULL && l2 != NULL )
            node = new ListNode(0);
          else if ( l1 == NULL )
            node = l2;
          else if ( l2 == NULL )
            node = l1;
          else
            return NULL;
        }
        
        if ( l1 != NULL && l2 != NULL ) {
          if ( l1->val <= l2->val ) {
            node->val = l1->val;
            l1 = l1->next;
          }
          else {
            node->val = l2->val;
            l2 = l2->next;
          }
          node->next = connect( l1,l2,node->next);
        }
        else if ( l1 == NULL )
          return l2;
        else if ( l2 == NULL )
          return l1;
        
        return node;
    }
    
};
