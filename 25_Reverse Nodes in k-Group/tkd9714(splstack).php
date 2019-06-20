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
     * @param Integer $k
     * @return ListNode
     */
    function reverseKGroup($head, $k) {
        $pre = $head;
        $cur = $head;
        $curCount = 1;
        $stack = new SplStack();
        
        while(!is_null($cur))
        {
            # push
            $stack->push($cur->val);
            
            # 達到指定位置
            if ( 0 == $curCount % $k)
            {
                # pop 
                while(!empty($stack->count()))
                {
                    $pre->val = $stack->pop();
                    $pre = $pre->next;
                }
                
            }
            
            $cur = $cur->next;
            $curCount++;
        }
        
        return $head;
    }
}
