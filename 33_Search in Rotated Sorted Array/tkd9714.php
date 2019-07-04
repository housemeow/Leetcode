class Solution {

    /**
     * @param Integer[] $nums
     * @param Integer $target
     * @return Integer
     */
    function search($nums, $target) {
        $index = array_search($target, $nums);
        if (false === $index)
            return -1;
        else
            return $index;
    }
}
