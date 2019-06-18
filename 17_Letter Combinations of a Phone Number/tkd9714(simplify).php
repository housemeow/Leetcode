class Solution {

    /**
     * @param String $digits
     * @return String[]
     */
    function letterCombinations($digits) {
        $array = [2 => ['a','b','c'],
                  3 => ['d','e','f'],
                  4 => ['g','h','i'],
                  5 => ['j','k','l'],
                  6 => ['m','n','o'],
                  7 => ['p','q','r','s'],
                  8 => ['t','u','v'],
                  9 => ['w','x','y','z']];
        
        if (strlen($digits) == 0) return [];
        
        if (strlen($digits) == 1) 
            return $array[$digits];
        else;
        
        $ansArray = array_chunk($array[$digits[0]],1);
        for ($i = 1; $i < strlen($digits); $i++)
        {
            $switch = [];
            $array2 = array_chunk($array[$digits[$i]],1);
            foreach($ansArray as $value1)
            {
                foreach($array2 as $value2)
                {
                    $switch[] = array_merge($value1, $value2);
                }
            }
            
            $ansArray = $switch;
        }
        
        foreach($ansArray as $key => $value)
        {
            $ansArray[$key] = implode($value,'');
        }
        
        return $ansArray;
    }
}
