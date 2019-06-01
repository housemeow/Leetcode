class Solution {

    /**
     * @param String[] $strs
     * @return String
     */
    function longestCommonPrefix($strs) {
        $first = $strs[0];
        for ($i = strlen($first); $i > 0; $i--)
        {
            $str = substr($first,0,$i);
            $find = true;
            foreach($strs as $value)
            {
                $subValue = substr($value,0,$i);
                if ($subValue != $str)
                {
                    $find = false;
                    break;
                }
                else;
            }
            
            if ($find)
            {
                return $str;
            }
            else;
        }
        
        return "";
    }
}
