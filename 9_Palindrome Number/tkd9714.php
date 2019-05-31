class Solution {

    /**
     * @param Integer $x
     * @return Boolean
     */
    function isPalindrome($x) {
        #數字轉字串
        $strnum = strval($x);
        #字串反轉
        $revers = strrev($strnum);
        $len = strlen($x);
        $odd = $len % 2;
        #取中間點
        $mid = ($len / 2);
        if(1 == $odd)
        {
            $mid += 1;
        }
        else;
        
        #比對
        for($i = 0; $i < $mid; $i++)
        {
            if ($strnum[$i] != $revers[$i])
            {
                return false;
            }
        }
        
        return true;
    }
}
