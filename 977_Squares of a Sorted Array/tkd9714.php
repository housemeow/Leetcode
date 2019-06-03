class Solution {

    /**
     * @param Integer[] $A
     * @return Integer[]
     */
    function sortedSquares($A) {
        $ans = [];
        foreach($A as $value)
        {
            array_push($ans, $value * $value);
        }
        
        sort($ans);
        return $ans;
    }
}
