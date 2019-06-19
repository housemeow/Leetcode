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
     * @param Integer $n
     * @return ListNode
     */
    function removeNthFromEnd($head, $n) {
        $first = new ListNode(0);
        $first->next = $head;
        
        #找出全長
        $len = 0;
        $pre = $head;
        while(!is_null($pre))
        {
            $pre = $pre->next;
            $len++;
        }
        
        $len -= $n;
        $pre = $first;
        
        while ($len > 0)
        {
            $len--;
            $pre = $pre->next;
        }
        
        $pre->next = $pre->next->next;
        
        return $first->next;
    }
}
