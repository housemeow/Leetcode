class Solution {

    /**
     * @param String $haystack
     * @param String $needle
     * @return Integer
     */
    function strStr($haystack, $needle) {
        if (0 === strlen($needle))
            return 0;
        else
        {
            $index = strpos($haystack, $needle);
            if ( false !== $index)
                return $index;
            else
                return -1;
        }
    }
}
