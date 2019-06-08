class Solution {

    /**
     * @param String $str
     * @return Integer
     */
    function myAtoi($str) {
        #php 7.1後會轉換科學記號,需要把e去除
        $index = strpos($str,'e');
        if (false !== $index)
        {
            $str = substr($str, 0, $index);
        }
        else;
        
        $num = intval($str);
        #rang -2的31次方 ～ 2的31次方-1
        $rang = pow(2,31);
        if ($num < ($rang * -1))
        {
            $num = $rang * -1;
        }
        else if ( $num > ($rang - 1))
        {
            $num = $rang - 1;
        }
        else;
        
        return $num;
    }
}
