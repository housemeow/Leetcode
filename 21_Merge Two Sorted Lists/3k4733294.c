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
    struct ListNode *temp_node = NULL;
    struct ListNode *temp_merge = NULL;
    
    bool first = true;
    while(l1->next!=NULL||l2->next!=NULL){
         if(first == false){  //do add every number link next and iterate to next
            if(l1->val<=l2->val){
                temp_node = l1;
                temp_merge->next = temp_node;
                temp_merge = temp_merge->next;
                temp_node = l2;
                temp_merge->next = temp_node;
                temp_merge = temp_merge->next;
                printf("33 temp_merge is %d",temp_merge);
                l2 = l2->next;
                l1 = l1->next;
                printf("38 l1.val value is %d",l1->val);
                printf("39 l1 is %d",l1);
                printf("40 temp_merge is %d",temp_merge);
            }else if(l1->val>l2->val){
                temp_node = l2;
                temp_merge->next = temp_node;
                temp_merge = temp_merge->next;
                temp_node = l1;
                temp_merge->next = temp_node;
                temp_merge = temp_merge->next;
                printf("41 temp_merge is %d",temp_merge);
                l2 = l2->next;
                l1 = l1->next;
                printf("42 l2.val value is %d",l2->val);
                printf("43 l2 is %d",l2);
                printf("44 temp_merge is %d",temp_merge);
            }
        }
        if(first == true){
            if(l1->val<=l2->val){  //first head of which list //and link first
                temp_merge = l1;
                printf("\n49 merge is %d",merge);
                //temp_merge = l1;
                printf("\n50 temp_merge->val value is %d",temp_merge->val);
                printf("\n50 temp_merge is %d",temp_merge);
                temp_node = l2;
                temp_merge->next = temp_node;
                printf("\n52 temp_merge->val value is %d",temp_merge->val);
                printf("\n52 temp_merge is %d",temp_merge);
                temp_merge = temp_merge->next;
                printf("\n54 l1.val value is %d",l1->val);
                printf("\n55 l2.val value is %d",l2->val);
                printf("\n56 l1 is %d",l1);
                printf("\n56 l2 is %d",l2);
            }else if(l1->val>l2->val){
                temp_merge = l2;
                printf("\n69 merge is %d",merge);
                //temp_merge = l1;
                printf("\n70 temp_merge->val value is %d",temp_merge->val);
                printf("\n72 temp_merge is %d",temp_merge);
                temp_node = l1;
                temp_merge->next = temp_node;
                printf("\n75 temp_merge->val value is %d",temp_merge->val);
                printf("\n76 temp_merge is %d",temp_merge);
                temp_merge = temp_merge->next;
                printf("\n78 l1.val value is %d",l1->val);
                printf("\n79 l2.val value is %d",l2->val);
                printf("\n80 l1 is %d",l1);
                printf("\n81 l2 is %d",l2);
                
            }
            first = false;
            l2=l2->next;
            l1=l1->next;
            
            printf("\n65 l1.val value is %d",l1->val);
            printf("\n66 l2.val value is %d",l2->val);
            printf("\n67 l2 is %d",l2);
            printf("\n67 l1 is %d",l1);
        }
    }
      
    //struct ListNode* current2 = &l2;
    //printf("\nl2 value is %d",current2->val);
    return merge;
}

