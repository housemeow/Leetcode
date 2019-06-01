class Solution {

    /**
     * @param Integer[][] $A
     * @return Integer[][]
     */
    function flipAndInvertImage($A) {
        foreach($A as &$value)
        {
            $value= array_reverse($value);
            foreach($value as &$element)
            {
                $element = $element === 1 ? 0 : 1;
            }
        }
        
        return $A;
    }
}
