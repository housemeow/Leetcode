class Solution {

    /**
     * @param Integer $dividend
     * @param Integer $divisor
     * @return Integer
     */
    function divide($dividend, $divisor) {
        $max = pow(2,31) -1;
        $min = pow(2,31) * -1;
        $ans = (int)($dividend / $divisor);
        if ($ans > $max)
            return $max;
        else if ($ans < $min)
            return $min;
        else
            return $ans;

    }
}
