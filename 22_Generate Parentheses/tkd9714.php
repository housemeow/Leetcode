class Solution {

    protected $result = [];
    protected $len = 0;
    /**
     * @param Integer $n
     * @return String[]
     */
    function generateParenthesis($n) {
        $this->len = 2 * $n;
        $this->backtracking('', 0, 0, $n);
        return $this->result;
    }
    
    function backtracking($str,$left,$right,$n)
    {
        if (strlen($str) == $this->len)
        {
            array_push($this->result, $str);
        }
        else;
        
        if ($left < $n)
        {
            $this->backtracking($str.'(', $left+1, $right, $n);
        }
        
        if ($right < $left)
        {
            $this->backtracking($str.')', $left, $right+1, $n);
        }
    }
}
