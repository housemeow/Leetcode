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
        
        $strval = strval($num);
        $space = pow(10,strlen($strval)-1);
        $str = "";
        for ($i = 0; $i < strlen($strval); $i++)
        {
            $num1 = intval($strval[$i]) * $space;
            
            while($num1 > 0)
            {
                #找尋一樣者
                $same = false;
                foreach ($array as $key => $value)
                {
                    if ($num1 === $key)
                    {
                        $str.= $value;
                        $same = true;
                        $num1 -= $key;
                        break;
                    }
                }
                
                #較接近者
                if (false === $same)
                {
                    foreach($array as $key => $value)
                    {   
                        if ($key < $num1)
                        {
                            $str.= $value;
                            $num1 -= $key;
                            break;
                        }
                    }   
                }
                else;
            }
            $space = intval($space / 10);
        }
           
        return $str;
    }
    
}
