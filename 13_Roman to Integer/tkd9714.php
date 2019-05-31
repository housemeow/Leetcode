class Solution {

    /**
     * @param String $s
     * @return Integer
     */
    function romanToInt($s) {
        #定義值
        $array = [
        ['str'=>"CM",'value'=>900],
        ['str'=>"CD",'value'=>400],
        ['str'=>"XC",'value'=>90],
        ['str'=>"XL",'value'=>40],
        ['str'=>"IX",'value'=>9],
        ['str'=>"IV",'value'=>4],
        ['str'=>"M",'value'=>1000],
        ['str'=>"D",'value'=>500],
        ['str'=>"C",'value'=>100],
        ['str'=>"L",'value'=>50],
        ['str'=>"X",'value'=>10],
        ['str'=>"V",'value'=>5],
        ['str'=>"I",'value'=>1]];
             
        for($i = 0; $i < count($array);)
        {
            if (strpos($s, $array[$i]['str']) !== false)
            {
                $ans += $array[$i]['value'];
                #找到就刪掉
                $str = '/'.preg_quote($array[$i]['str'],'/').'/';
                $s = preg_replace($str,'',$s,1);
            }
            else
            {
                $i++;
            }
        }
        
        return $ans;
    }
    
}
