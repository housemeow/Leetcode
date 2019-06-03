class Solution {

    /**
     * @param Integer[] $nums
     * @return Integer
     */
    function removeDuplicates(&$nums) {
        #移除重複
        $nums = array_unique($nums);
        #array數量
        return count($nums);
    }
}
