class Solution {

    /**
     * @param String $J
     * @param String $S
     * @return Integer
     */
    function numJewelsInStones($J, $S) {
        $len = strlen($J);
        $ans = 0;
        for ($i =0; $i < $len; $i++)
        {
            $num = substr_count($S, $J[$i]);
            $ans += $num;
        }
        
        return $ans;
    }
}
