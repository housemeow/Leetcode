class Solution {

    /**
     * @param String $s
     * @return Integer
     */
    function longestValidParentheses($s) {
        $left = 0; 
        $right =0; 
        $maxlen = 0;
        for($i = 0; $i < strlen($s); $i++)
        {
            if ( '(' == $s[$i])
            {
                $left++;
            }
            else
            {
                $right++;
            }
            if($left == $right)
            {
                $maxlen = max($maxlen, 2 * $right);
            }
            else if ($right >= $left)
            {
                $left = 0;
                $right = 0;
            }
            else;
        }
        
        $left = 0;
        $right = 0;
        for ($i = strlen($s) -1 ; $i >= 0; $i--)
        {
            if('(' == $s[$i])
            {
                $left++;
            }
            else
            {
                $right++;
            }
            if($left == $right)
            {
                $maxlen = max($maxlen, 2 * $left);
            }
            else if ($left >= $right)
            {
                $left = 0; 
                $right = 0;
            }
        }
        
        return $maxlen;
    }
}
