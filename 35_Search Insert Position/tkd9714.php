class Solution {

    /**
     * @param Integer[] $nums
     * @param Integer $target
     * @return Integer
     */
    function searchInsert($nums, $target) {
        array_push($nums,$target);
        sort($nums);
        return array_search($target,$nums);
    }
}
