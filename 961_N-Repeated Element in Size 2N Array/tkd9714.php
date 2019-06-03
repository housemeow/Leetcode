class Solution {

    /**
     * @param Integer[] $A
     * @return Integer
     */
    function repeatedNTimes($A) {
        $ans = array_count_values($A);
        return array_search(max($ans),$ans);
    }
}
