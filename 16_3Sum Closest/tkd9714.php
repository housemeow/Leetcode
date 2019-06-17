class Solution {

    /**
     * @param Integer[] $nums
     * @param Integer $target
     * @return Integer
     */
    function threeSumClosest($nums, $target) {
        
        $count = count($nums);
        if ($count < 3)
            return 0;
        else;
        
        $closer = PHP_INT_MAX;
        $ans = 0;
        sort($nums);
        for ($i = 0; $i < $count - 2; $i++)
        {        
            # j 左往右
            # k 右往左
            $j = $i + 1;
            $k = $count - 1;
            while ($j < $k)
            {
                $sum = $nums[$i] + $nums[$j] + $nums[$k];
                $diff = $sum - $target;
                $gap = abs($diff);
                
                if ($diff == 0)
                {
                    return $sum;
                }
                else if ($diff < 0)
                {
                    $j++;
                }
                else
                    $k--;
                
                if ($gap < $closer)
                {
                    $ans = $sum;
                    $closer = $gap;
                }
                else;
            }
        }
        
        return $ans;
    }
}
