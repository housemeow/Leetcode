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
     * @param ListNode[] $lists
     * @return ListNode
     */
    function mergeKLists($lists) {
        $listArray = [];
        $k = 0;
        #放到array;
        foreach($lists as $value)
        {
            $pre = $value;
            while(!is_null($pre))
            {
               $listArray[$k] = $pre->val;
               $k++; 
                $pre = $pre->next;
            }
        }
        
        sort($listArray);
        $head = new ListNode(0);
        $pre = $head;
        foreach($listArray as $value)
        {
            $pre->next = new ListNode($value);
            $pre = $pre->next;
        }
        
        return $head->next;
        
    }
}
