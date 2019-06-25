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

//somebody can teach me how this flow works..............
//http://teknosrc.com/linked-list-in-c-merge-two-linked-list-into-single-linked-list-efficient/
    ///Input
	//Linked List 1: one->three->five->seven
	//Head of Linked List 1 is head1 
	//
	//Linked List 2: two->four->six
	//Head of Linked List 2 is head2
	//
	//Output
	//Linked List 3: one->two->three->four->five->six->seven
	//Head of Linked List 3 is head1
//really amazing how to!?

struct LstNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *temp_node1 = l1;
    struct ListNode *temp_node2 = l2;
    struct ListNode *temp_node11 = NULL;
    struct ListNode *temp_node22 = NULL;
    struct node *holder1 = NULL;
    struct node *holder2 = NULL;
    bool whichfirst = false;
        if(l1!=NULL&l2!=NULL){
            if(l1->val<=l2->val){
                whichfirst = false;
            }else if(l1->val>l2->val){
                whichfirst = true;
            }else{} 
        }
        while(temp_node1!=NULL || temp_node2!=NULL)	
    	{
	        	//Executes until both temp1 and temp2 are not NULL
                
                if(temp_node1!=NULL&&temp_node2!=NULL){
                    if(whichfirst==false){
                    if(temp_node1->val<=temp_node2->val){
                        temp_node11=temp_node1->next;
                        if(temp_node11!=NULL){
                            if(temp_node11->val<temp_node2->val){
                                holder1=temp_node1->next;
                                temp_node1=holder1;
                                printf("61temp_node1 val is %d ",temp_node1->val);
                                printf("62temp_node2 val is %d ",temp_node2->val);    
                            }
                            if(temp_node11->val>temp_node2->val){
        		                holder1=temp_node1->next;
        		                //Storing the address of next node of first linked list

        		                temp_node1->next=temp_node2;
        		                //Making the first node of first linked list point to first node of second linked list

        		                if(holder1!=NULL){
                                    //Making the first node of second linked list point to second node of first linked list
            		                holder2=temp_node2->next;
            		                temp_node2->next=holder1;
		                        }
                            }
                            printf("77temp_node1 val is %d ",temp_node1->val);
                            printf("78temp_node2 val is %d ",temp_node2->val);
                            temp_node1=holder1;
        		            temp_node2=holder2;
                        }
                    }
                    }else if(whichfirst==false){
                        if(temp_node2!=NULL&&temp_node1!=NULL){
                            if(temp_node1->val>temp_node2->val){
                                holder2=temp_node2->next;
                                temp_node2=holder2;
                                printf("77temp_node1 val is %d ",temp_node1->val);
                                printf("78temp_node2 val is %d ",temp_node2->val);
                            }
                        }
                    }
                }else if(temp_node1==NULL&&temp_node2!=NULL){
                    if(whichfirst==false){
                            holder1=temp_node1->next;
        		            //Storing the address of next node of first linked list

        		            temp_node1->next=temp_node2;
        		            //Making the first node of first linked list point to first node of second linked list

        		            if(holder1!=NULL){
                                //Making the first node of second linked list point to second node of first linked list
            		            holder2=temp_node2->next;
            		            temp_node2->next=holder1;
		                    }
                            printf("94temp_node1 val is %d ",temp_node1->val);
                            printf("95temp_node2 val is %d ",temp_node2->val);
                            temp_node1=holder1;
        		            temp_node2=holder2;
                            
                    }
                }else if(temp_node1!=NULL&&temp_node2==NULL){
                    
                }
                
                
                   /* 
                if(whichfirst==true){
                    if(temp_node1->val>=temp_node2->val){
                        temp_node22=temp_node2->next;
                        if(temp_node22!=NULL){
                            if(temp_node22->val<temp_node1->val){
                                holder2=temp_node2->next;
                                temp_node2=holder2;
                                printf("105temp_node1 val is %d ",temp_node1->val);
                                printf("106temp_node2 val is %d ",temp_node2->val);    
                            }
                            if(temp_node22->val>temp_node1->val){
                            holder2=temp_node2->next;
        		            //Storing the address of next node of first linked list

        		            temp_node2->next=temp_node1;
        		            //Making the first node of first linked list point to first node of second linked list

        		            if(holder2!=NULL){
                                //Making the first node of second linked list point to second node of first linked list
            		            holder1=temp_node1->next;
            		            temp_node1->next=holder2;
		                    }
                            printf("94temp_node1 val is %d ",temp_node1->val);
                            printf("95temp_node2 val is %d ",temp_node2->val);
                            temp_node1=holder1;
        		            temp_node2=holder2;
                                }
                        }else if(temp_node22==NULL){
                            holder2=temp_node2->next;
        		            //Storing the address of next node of first linked list

        		            temp_node2->next=temp_node1;
        		            //Making the first node of first linked list point to first node of second linked list

        		            if(holder2!=NULL){
                                //Making the first node of second linked list point to second node of first linked list
            		            holder1=temp_node1->next;
            		            temp_node1->next=holder2;
		                    }
                            printf("94temp_node1 val is %d ",temp_node1->val);
                            printf("95temp_node2 val is %d ",temp_node2->val);
                            temp_node1=holder1;
        		            temp_node2=holder2;
                            
                        }else{}
                    }
                }else if(whichfirst==true){
                    if(temp_node2!=NULL&&temp_node1!=NULL){
                        if(temp_node1->val<temp_node2->val){
                            holder1=temp_node1->next;
                            temp_node1=holder1;
                            printf("105temp_node1 val is %d ",temp_node1->val);
                            printf("106temp_node2 val is %d ",temp_node2->val);
                        }
                    }
                }
                	*/
        		//Updating the address location of two pointer variables temp1 and temp2
    	}
    
    if(l1==NULL){
        l1=l2; 
    }else if(l2==NULL){
        l2=l1;}
    
    if(whichfirst==false){
        return l1;
    }else{
        return l2;
    }
}
