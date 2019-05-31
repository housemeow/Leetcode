class Solution {

    /**
     * @param Integer[] $nums
     * @param Integer $target
     * @return Integer[]
     */
    function twoSum($nums, $target) {
        $ans = [];
        
        foreach($nums as $value)
        {
            $p1 = $target - $value;
            $key1 = array_search($value,$nums);
            if (in_array($p1, $nums))
            {
                $key2 = array_search($p1, $nums);
                if ($key1 == $key2)
                {
                    $nums[$key2] = -1;
                    if (in_array($p1, $nums))
                    {
                        $key2 = array_search($p1, $nums);
                    }
                    else
                    {
                        continue;
                    }
                }
                else;
                
                $ans = [$key1, $key2];
                break;
            }
            else;
            
        }
        return $ans;
    }
}