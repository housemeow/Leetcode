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
                #取得除了重複字元開頭的子字串
                $str = substr($str,strpos($str,$s[$i])+1);
            }
            
            $str .=$s[$i];
            echo $str.'/';
            $max = max($max, strlen($str));
        }
        
        return $max;
    }
}
