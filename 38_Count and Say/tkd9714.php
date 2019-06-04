class Solution {

    /**
     * @param Integer $n
     * @return String
     */
    function countAndSay($n) {
        $nums[0] = "1";
        $index = 0;
         while ($index < $n-1)
         {
             $str = $nums[$index];
             $count = 1;
             #取第一個數字
             $num = $str[0];
             $ans = "";
            for($i = 1; $i < strlen($str); $i++)
            {
                if ($num === $str[$i])
                {
                    #相等累積
                    $count++;
                }
                else
                {
                    #串成字串
                    $ans = $ans.$count.$num;
                    #換下一個數字
                    $num = $str[$i];
                    $count = 1;
                }
            } // for
             #最後一個數字
             $ans = $ans.$count.$num;
             $index++;
             $nums[$index] = $ans;
         } // while

        return $nums[$n-1];
    }
}
