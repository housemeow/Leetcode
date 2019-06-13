class Solution {

    /**
     * @param Integer $num
     * @return String
     */
    function intToRoman($num) {
        #定義值
        $array = [
            1000 => "M",
            900  => "CM",
            500  => "D",
            400  => "CD",
            100  => "C",
            90   => "XC",
            50   => "L",
            40   => "XL",
            10   => "X",
            9    => "IX",
            5    => "V",
            4    => "IV",
            1    => "I"
        ];
        $str = "";
        foreach($array as $key => $value)
        {
            #不考慮的值
            if ($num < $key)
            {
                continue;
            }
            else
            {
                $repeat = intval($num / $key);
                $num = $num % $key;
                $str .= str_repeat($value,$repeat);
            }
        }
           
        return $str;
    }
    
}
