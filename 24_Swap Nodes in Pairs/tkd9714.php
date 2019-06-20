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
     * @param ListNode $head
     * @return ListNode
     */
    function swapPairs($head) {
       $pre = $head;
        while(!is_null($pre->next))
        {
            $val = $pre->next->val;
            $next = $pre->next;
            $next->val = $pre->val;
            $pre->val = $val;
            $pre = $pre->next->next;
        }
        
        return $head;
    }
}
