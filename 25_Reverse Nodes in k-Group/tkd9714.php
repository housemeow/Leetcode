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
        if (1 === $k)
            return $head;
        else;
        
        $pre = $head;
        $len = 0;
        #總長
        while(!is_null($pre))
        {
            $pre = $pre->next;
            $len++;
        }
        
        if ($k > $len)
            return $head;
        else;
        
        $pre = $head;
        while(!is_null($pre->next))
        {
            $next = $pre;
            $times = $k - 1;
            $len -= $k;
            if ($len < 0)
                break;
            else;
            
            while ($times > 0)
            {
                if (!is_null($next->next))
                {
                    $next = $next->next;
                }
                $times--;
            }

            $this->reverselink($pre,$next,$k);
            $pre = $next->next;
        }
        
        return $head;
    }
    
    function reverselink($head, $last, $k)
    {
        $pre = $head;
        $times = intval($k / 2);
        $search = $k;
        while($times > 0)
        {
            $val = $last->val;
            $last->val = $pre->val;
            $pre->val = $val;
            $times--;
            $search--;
            $last = $head;
            for ($i = 0; $i < $search-1; $i++)
            {
                $last = $last->next;
            }
            
            $pre = $pre->next;
        }
    }
}
