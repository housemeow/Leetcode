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
    function addTwoNumbers($l1, $l2) {
        if (NULL === $l1)
            return $l2;
        else if (NULL === $l2)
            return $l1;
        $node = new ListNode(0);
        $per = $node;
        #進位
        $nextdigi = 0;
        while (NULL !== $l1 || NULL !== $l2)
        {
            if (NULL !== $l1)
                $num1 = $l1->val;
            else
                $num1 = 0;
            
            if (NULL !== $l2)
                $num2 = $l2->val;
            else
                $num2 = 0;

            #取餘數
            $num = ($num1 + $num2) % 10;
            $per->val = ($num + $nextdigi) % 10;
            
            if (($num1 + $num2 + $nextdigi) >= 10)
            {   #進位
                $nextdigi = 1;
            }
            else
            {
                $nextdigi = 0;
            }
            
            $l1 = $l1->next;
            $l2 = $l2->next;
            if (NULL !== $l1 || NULL !== $l2)
            {
                $per->next = new ListNode(0);
                $per = $per->next;
            }
            else;
            
        }
        
        if (0 !== $nextdigi)
        {   #補進位值
            $per->next = new ListNode($nextdigi);
        }
        else;
        
        return $node;
    }
}
