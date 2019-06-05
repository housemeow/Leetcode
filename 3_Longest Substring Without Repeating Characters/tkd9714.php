class Solution {

    /**
     * @param String $s
     * @return Integer
     */
    function lengthOfLongestSubstring($s) {
        $str = "";
        $max = 0;

        for($i = 0; $i < strlen($s); $i++)
        {
            if (false !== strpos($str,$s[$i]))
            {
                $str = substr($str,strpos($str,$s[$i])+1);
            }
            
            $str .=$s[$i];
            echo $str.'/';
            $max = max($max, strlen($str));
        }
        
        return $max;
    }
}
