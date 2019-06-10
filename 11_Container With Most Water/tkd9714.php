class Solution {

    /**
     * @param Integer[] $height
     * @return Integer
     */
    function maxArea($height) {
        $start = 0;
        $end = count($height) - 1;
        $maxArea = 0;
        while ($start < $end)
        {
            $min = min($height[$start], $height[$end]);
            $weight = $end - $start;
            $area = $min * $weight;
            $maxArea = max($maxArea, $area);
            
            if ($height[$start] < $height[$end])
                $start++;
            else
                $end--;
        }
        
        return $maxArea;
    }
}
