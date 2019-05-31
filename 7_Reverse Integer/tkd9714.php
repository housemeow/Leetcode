class Solution {

    /**
     * @param Integer $x
     * @return Integer
     */
    function reverse($x) {
        if ($x < 0)
        {
            $num = -1;
        }
        else
        {
            $num = 1;
        }

        $str = strval($x);
        $str = strrev($str);
        $binary = base_convert($str, 10, 2);
        if(strlen($binary) >= 32)
        {
            return 0;
        }
        else
        {
            $ans = (int)$str * $num;
            $binary = base_convert($str, 10, 2);
            return $ans;
        }
    }
}
