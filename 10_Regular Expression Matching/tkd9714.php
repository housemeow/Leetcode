class Solution {

    /**
     * @param String $s
     * @param String $p
     * @return Boolean
     */
    
    public $memo = array();
    
    function isMatch($s, $p) {
        if (empty($p))
            return empty($s);
        
        $first_match = (!empty($s) && ($p[0] == $s[0] || $p[0] == '.'));
        
        if (strlen($p) >= 2 && $p[1] == '*')
        {
            $psubstr = substr($p, 2, strlen($p));
            $ssubstr = substr($s, 1, strlen($s));
            return (($first_match && $this->isMatch($ssubstr, $p)) ||
                     $this->isMatch($s, $psubstr));
        }
        else
        {
            $psubstr = substr($p, 1, strlen($p));
            $ssubstr = substr($s, 1, strlen($s));
            return $first_match && $this->isMatch($ssubstr, $psubstr);
        }
    }
    
}
