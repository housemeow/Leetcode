class Solution {

    /**
     * @param String $s
     * @return Boolean
     */
    function isValid($s) {
        $symbol = array(")" => "(", "]" => "[", "}" => "{");
        $stack = [];
        for ($i = 0; $i < strlen($s); $i++)
        {
            if (!array_key_exists($s[$i],$symbol))
                array_push($stack,$s[$i]);
            else if (!count($stack) || !($symbol[$s[$i]] == array_pop($stack)))
                return false;
        }
        
        return (count($stack) == 0);
    }
    
}
