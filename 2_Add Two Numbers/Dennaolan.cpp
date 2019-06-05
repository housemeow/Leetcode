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
        ListNode* ans = new ListNode(0);
        sum( ans, l1, l2, 0 );
        return ans;
    }
    
private:
    void sum(ListNode* ans, ListNode* l1, ListNode* l2, int s) {
        
      if( l1 != NULL && l2 != NULL ) {
        ans->val = ( l1->val + l2->val + s ) % 10;
        if ( l1->next == NULL && l2->next == NULL ) {
          if ( ( l1->val + l2->val + s ) / 10 != 0 ) {
            ans->next = new ListNode(0);
            ans->next->val = ( l1->val + l2->val + s ) / 10;
            return;
          }
          else
            return;
        }
        else {
          ans->next = new ListNode(0);
          sum( ans->next, l1->next, l2->next, ( l1->val + l2->val + s ) / 10 );
        }
      }
      else if ( l1 == NULL && l2 != NULL ) {
        ans->val = ( l2->val + s ) % 10;
        if ( l2->next == NULL ) {
          if ( ( l2->val + s ) / 10 > 0 ) {
            ans->next = new ListNode(0);
            ans->next->val = ( l2->val + s ) / 10;
            return;
          }
          else
            return;
        }
        else {
          ans->next = new ListNode(0);
          sum( ans->next, NULL, l2->next, ( l2->val + s ) / 10 );
        } 
      }
      else if ( l1 != NULL && l2 == NULL ){
        ans->val = ( l1->val + s ) % 10;
        if ( l1->next == NULL ) {
          if ( ( l1->val + s ) / 10 > 0 ) {
            ans->next = new ListNode(0);
            ans->next->val = ( l1->val + s ) / 10;
            return;
          }
          else
            return;
        }
        else {
          ans->next = new ListNode(0);
          sum( ans->next, l1->next, NULL, ( l1->val + s ) / 10 );
        } 
      }
      else {
        return;
      }
    }
};
