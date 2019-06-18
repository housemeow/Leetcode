class Solution {

    /**
     * @param String $digits
     * @return String[]
     */
    function letterCombinations($digits) {
        $array = [2 => "abc",
                  3 => "def",
                  4 => "ghi",
                  5 => "jkl",
                  6 => "mno",
                  7 => "pqrs",
                  8 => "tuv",
                  9 => "wxyz"];
        
        #只要有其他數字一律return []
        if (!preg_match('/^([2-9]*)$/', $digits))
            return[];
        else;
        
        $strArray = str_split($digits,1);
        $ansArray = [];
        $times = count($strArray);
        
        if ($times >= 2)
        {   
            #前2個
            $saveArray = $this->mergeTwo($array[$strArray[0]], $array[$strArray[1]]);
            for ($i = 2; $i < $times; $i++)
            {
                $str1 = $array[$strArray[$i]];
                $k = 0;
                foreach($saveArray as $value)
                {
                    for ($j = 0; $j < strlen($str1); $j++)
                    {
                        $ansArray[$k] = $value.$str1[$j];
                        $k++;
                    }
                }
                
                $saveArray = $ansArray;
                $ansArray = [];
            }
            
            $ansArray = $saveArray;
        }
        else if (1 == $times)
        {
            #單個
            $str1 = $array[$strArray[0]];
            for ($i = 0; $i < strlen($str1); $i++)
            {
                $ansArray[$i] = $str1[$i];
            }
        }
        else;
        
        
        return $ansArray;
    }
    
    function mergeTwo($str1, $str2)
    {   
        $ansArray = [];
        $k = 0;
        for ($i = 0; $i < strlen($str1); $i++)
        {
            for ($j = 0; $j < strlen($str2); $j++)
            {
                $ansArray[$k] = $str1[$i].$str2[$j];
                $k++;
            }
        }
        
        return $ansArray;
    }
}
