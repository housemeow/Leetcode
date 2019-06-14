class Solution {

    /**
     * @param Integer[] $nums
     * @return Integer[][]
     */
    function threeSum($nums) {
        $ans = [];
        sort($nums);
        for ($i = 0; $i < count($nums) -1; $i++)
        {
            if ($nums[$i] > 0)
                return $ans;
            
            # 避免重複
            if ($i - 1 >= 0 && $nums[$i] === $nums[$i-1])
                continue;
            
            # j 左往右
            # k 右往左
            $j = $i + 1;
            $k = count($nums) - 1;

            while ($j < $k)
            {
                $sum = $nums[$i] + $nums[$j] + $nums[$k];

                if (0 === $sum)
                {
                    $ans[] = [$nums[$i], $nums[$j], $nums[$k]];
                    $j++;
                    $k--;
                    
                    while($j < $k && $nums[$j] === $nums[$j-1])
                    {
                        $j++;
                    }
                    
                    while ($j < $k && $nums[$k] === $nums[$k+1])
                    {
                        $k--;
                    }
                }
                else if ($sum < 0)
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
