class Solution {

    /**
     * @param Integer[] $nums
     * @param Integer $val
     * @return Integer
     */
    function removeElement(&$nums, $val) {
        foreach($nums as $key => $value)
        {
            #移除
            if ($value === $val)
                unset($nums[$key]);
            else;
        }
        
        return count($nums);
    }
}
