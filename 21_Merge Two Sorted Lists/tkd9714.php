/**
 * Definition for a singly-linked list.
 * class ListNode {
 *     public $val = 0;
 *     public $next = null;
 *     function __construct($val) { $this->val = $val; }
 * }
 */

class Solution {
    /**
     * @param ListNode $l1
     * @param ListNode $l2
     * @return ListNode
     */
    function mergeTwoLists($l1, $l2) {
         $node = new ListNode(0);
         $link = $node;
        
         while ($l1!==null && $l2!==null)
         {
             if ($l1->val < $l2->val)
             {
                 $link->next = $l1;
                 $l1 = $l1->next;
             }
             else
             {
                 $link->next = $l2;
                 $l2 = $l2->next;
             }
            
             $link = $link->next;
         }
        
        if ($l1 === null)
        {
            $link->next = $l2;
        }
        else
        {
            $link->next = $l1;
        }
        
        return $node->next;

     }
}
