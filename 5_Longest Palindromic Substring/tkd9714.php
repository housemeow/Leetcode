class Solution {

    /**
     * @param String $s
     * @return String
     */
    function longestPalindrome($s) {
        if (strlen($s) <= 1)
            return $s;
        else;
        
        $len = strlen($s);
        $str = "";
        $maxlen = 1;
        
        for ($i = 0; $i < $len; $i++)
        {
            for ($sublen = $maxlen; $sublen <= $len; $sublen++ )
            {
                #當前位置的一半長度
                $start = $i - intdiv($sublen, 2);
                $end = $start + $sublen;
                
                #不合理的位置或長度
                if ($start < 0 || $end > $len)
                {
                    break;
                }
                else;
                
                $subStr = substr($s, $start, $sublen);
                #反轉字串
                #判斷回文
                if($subStr === strrev($subStr))
                {
                    $result = $subStr;
                    $maxlen = $sublen;
                }
                else if ($maxlen < $sublen - 1)
                {   #再檢查一次
                    break;
                }
            }
        }
        
        return $result;
    }
}
