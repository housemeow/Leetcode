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
//l1
//  l1->next   l2
//l2
//  l2->next 
//  l1 2->5->5
//  l2 1->3->4
// new 1->2->3->4     
// l2  1->2

struct LstNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *temp_node1 = NULL;
    struct ListNode *temp_node2 = NULL;
    struct ListNode *start_merge = NULL;
    struct ListNode *cur_merge = NULL;
    bool bigswitch = 0;// 0 is l1 first 1 is l2 first
    
    
    bool first = true;
    while(l1->next!=NULL||l2->next!=NULL){
         if(first == false){  //do add every number link next and iterate to next
            if(l1->val<=l2->val){
                cur_merge=temp_node1;
                printf("34 cur_merge val is %d",cur_merge->val);
                temp_node1=temp_node1->next;
                cur_merge=cur_merge->next;
                cur_merge=temp_node2;
                printf("38 cur_merge val is %d",cur_merge->val);
                temp_node2=temp_node2->next;
                cur_merge=cur_merge->next;
                printf("41 cur_merge val is %d",cur_merge->val);
                
            }else if(l1->val>l2->val){
                cur_merge=temp_node2;
                printf("47 cur_merge val is %d",cur_merge->val);
                temp_node1=temp_node2->next;
                cur_merge=cur_merge->next;
                cur_merge=temp_node1;
                printf("51 cur_merge val is %d",cur_merge->val);
                temp_node2=temp_node1->next;
                cur_merge=cur_merge->next;
                printf("54 cur_merge val is %d",cur_merge->val);
                
            }
        }
        if(first == true){
            if(l1->val<=l2->val){  //first head of which list //and link first
                temp_node1=l1->next;
                temp_node2=l2->next;
                l2->next=l1;
                start_merge=l2;
                cur_merge=l2->next;
                printf("\n63 l2.val value is %d",l2->val);
                printf("64 cur_merge val is %d",cur_merge->val);
            }else if(l1->val>l2->val){
                temp_node1=l1->next;
                temp_node2=l2->next;
                l1->next=l2;
                start_merge=l1;
                cur_merge=l1->next;
                printf("\n71 l1.val value is %d",l1->val);
                printf("72 cur_merge val is %d",cur_merge->val);
            }
            first = false;
            
        }
    }
    return start_merge;
}
