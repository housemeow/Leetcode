class Solution {

    /**
     * @param Integer[] $nums
     * @return Integer[][]
     */
    function threeSum($nums) {
        $ans = [];
        $array =[];
        if (count($nums) < 3)
        {
            return $ans;
        }
        else;
        
        for($i = 0; $i < count($nums)-1; $i++)
        {
            for ($j = 0; $j < count($nums); $j++)
            {
                if ($j === $i)
                    $j++;
                else;
                
                $num1 = $nums[$i];
                $num2 = $nums[$j];
                $num3 = $num1 + $num2;
                $num3 *= -1;

                if ($this->inArray($nums, $i, $j, $num3))
                {
                    array_push($array,$num1,$num2,$num3);
                    sort($array);
                    $ans[$k] = $array;
                    $k++;
                    $array = [];
                }
            }
        }
        return array_unique($ans, SORT_REGULAR);
    }

    
    function inArray($array, $index1, $index2, $num3)
    {
        foreach($array as $key => $value)
        {
            if (($key != $index1) && ($key != $index2) && ($value === $num3))
            {
                return true;
            }
            else;
        }
        
        return false;
    }
}
