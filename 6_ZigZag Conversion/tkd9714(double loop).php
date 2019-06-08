class Solution {

    /**
     * @param String $s
     * @param Integer $numRows
     * @return String
     */
    function convert($s, $numRows) {
        if (strlen($s) < 1)
            return "";
        else;
        
        $ans = array_fill(0, $numRows, '');
        
        $j = 0;
        for($i = 0; $i < strlen($s); $i++)
        {
            $ans[$j] .= $s[$i];

            if ($j < $numRows-1)
                $j++;
            else
            {
                $j--;
                while($j > 0)
                {
                    if ($i < strlen($s))
                        $i++;
                    else
                        break;
                    $ans[$j] .= $s[$i];
                    $j--;
                }
                
                if ($j < 0)
                    $j = 0;
                else;
            }
            
        }
        
        return implode($ans);
    }
}
