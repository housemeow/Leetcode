class Solution {

    /**
     * @param Integer $x
     * @return Boolean
     */
    function isPalindrome($x) {
        if ($x < 0)
            return false;
        else;
        
        #數字轉字串
        $strnum = strval($x);
        #字串反轉
        $revers = strrev($strnum);
        
        if ($strnum === $revers)
            return true;
        else
            return false;
    }
}
