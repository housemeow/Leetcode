class Solution {

    /**
     * @param Integer[] $nums
     * @return NULL
     */
    function nextPermutation(&$nums) {
        $len = count($nums);
        $i = $len - 1;
        while ($i >= 0 && $nums[$i] >= $nums[$i+1])
        {
            $i--;
        }
        
        for ($j = $len-1; $i >= 0 && $j > $i; $j--)
        {
            if ($nums[$j] > $nums[$i])
            {
                [$nums[$j], $nums[$i]] = [$nums[$i], $nums[$j]];
                break;
            }
        }
        
        $reverse = [];
        $k = $i+1;
        while ($k < $len)
        {
            $revers[] = $nums[$k];
            $k++;
        }
        
        $p = count($revers) - 1;
        $k = $i+1;
        while($p >= 0)
        {
            $nums[$k] = $revers[$p];
            $p--;
            $k++;
        }
        
    }
        
}
