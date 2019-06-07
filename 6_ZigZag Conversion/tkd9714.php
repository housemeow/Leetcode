class Solution {

    /**
     * @param String $s
     * @param Integer $numRows
     * @return String
     */
    function convert($s, $numRows) {
        #切割成單個字元
        $subStr = str_split($s);
        $mod = 2 * ($numRows - 1);
        #先宣告陣列大小,不然數據過大會死掉
        $ans = array_fill(0, $numRows, '');
        foreach ($subStr as $key => $value) {
            #取得index
            $index = $mod == 0 ? 0 : $key % $mod;
            
            if ($index >= $numRows) {
                #反向
                $index = $mod - $index;
            }
            $ans[$index] .= $value;
        }
        return implode($ans);
    }
}
