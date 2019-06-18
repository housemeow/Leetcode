/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
// do not store array and position
// compare every link list node max or min and make new link then itereation to next
//Line 14: Char 5: runtime error: member access within null pointer of type 'struct ListNode' (solution.c)
//create statement to eliminate the link list pointer is not null

struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    //struct ListNode* current1 = &l1;
    //printf("l1 value is %d",current1->val);
    if(l1!=NULL&&l2!=NULL&&l1->next!=NULL&&l2->next!=NULL){ }
         printf("l1.val value is %d",l1->val);
        l1=l1->next;
        printf("l1.val next value is %d",l1->val);
        l1=l1->next;
        printf("l1.val next next value is %d",l1->val);
   
   
    //struct ListNode* current2 = &l2;
    //printf("\nl2 value is %d",current2->val);
    return l1;
}
