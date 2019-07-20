class Solution {

    /**
     * @param Integer[] $nums
     * @param Integer $target
     * @return Integer[]
     */
    function searchRange($nums, $target) {
        $index = [];
        $count = count($nums);
        if (0 === $count)
            return [-1,-1];
        else;
        
        $mid = intval($count / 2);

        if ($target > $nums[$mid])
        {
            while ($mid < $count)
            {
                if ($target === $nums[$mid])
                    $index[] = $mid;
                else;
                
                $mid++;
            }
        }
        else if ($target < $nums[$mid])
        {
            while($mid >= 0)
            {
                if ($target === $nums[$mid])
                    $index[] = $mid;
                else;
                
                $mid--;
            }
        }
        else
        {
            $result = array_unique($nums);
            if (1 === count($result))
            {
                $index = [0, $count-1];   
            }
            else
            {
                $i = $mid;
                while ($target == $nums[$i])
                {
                    $index[] = $i;
                    $i--;
                }
                
                $i = $mid;
                while($target == $nums[$i])
                {
                    $index[] = $i;
                    $i++;
                }
            }
        }
        
        if (0 === count($index))
        {
            $index = [-1,-1];
        }
        else;
        
        $min = min($index);
        $max = max($index);
        
        return [$min, $max];
    }
}
