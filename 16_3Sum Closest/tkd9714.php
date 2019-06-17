class Solution {

    /**
     * @param Integer[] $nums
     * @param Integer $target
     * @return Integer
     */
    function threeSumClosest($nums, $target) {
        $closer = abs($target - ($nums[0] + $nums[1] + $nums[2]));
        $ans = $nums[0] + $nums[1] + $nums[2];
        sort($nums);
        
        for ($i = 0; $i < count($nums) - 1; $i++)
        {        
            # j 左往右
            # k 右往左
            $j = $i + 1;
            $k = count($nums) - 1;
            while ($j < $k)
            {
                $sum = $nums[$i] + $nums[$j] + $nums[$k];
                $diff = $target - $sum;
                $gap = abs($diff);
                if ($gap < $closer)
                {
                    $ans = $sum;
                    $closer = $gap;
                }
                else if ($sum < $target)
                {
                    $j++;
                }
                else
                {
                    $k--;
                }
                
            }
        }
        
        return $ans;
    }
}
