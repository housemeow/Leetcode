class Solution {
    /**
     * @param Integer[] $A
     * @return Integer[]
     */
    function sortArrayByParity($A) {
        $odd = [];
        $even = [];
        foreach($A as $value)
        {
            if (0 == $value % 2)
            {
                array_push($even, $value);
            }
            else
            {
                array_push($odd, $value);
            }
        }
        
        return array_merge($even,$odd);
    }
    
}
