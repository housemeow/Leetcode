class Solution {

    /**
     * @param Integer[] $nums1
     * @param Integer[] $nums2
     * @return Float
     */
    function findMedianSortedArrays($nums1, $nums2) {
        $ans = [];
        $ans = array_merge($nums1, $nums2);
        sort($ans);
        $count = count($ans);
        #奇數
        if (($count % 2 != 0))
        {
            $index = intval(($count -1 ) / 2);
            return $ans[$index];
        }
        else
        {
            $index = intval($count / 2);
            $num1 = $ans[$index - 1];
            $num2 = $ans[$index];
            return ($num1 + $num2) / 2;
        }
    }
}
