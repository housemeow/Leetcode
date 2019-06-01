class Solution {

    /**
     * @param String[] $words
     * @return Integer
     */
    function uniqueMorseRepresentations($words) {
        #26個字母
        $en = [
            'a' => ".-",
            'b' => "-...",
            'c' => "-.-.",
            'd' => "-..",
            'e' => ".",
            'f' => "..-.",
            'g' => "--.",
            'h' => "....",
            'i' => "..",
            'j' => ".---",
            'k' => "-.-",
            'l' => ".-..",
            'm' => "--",
            'n' => "-.",
            'o' => "---",
            'p' => ".--.",
            'q' => "--.-",
            'r' => ".-.",
            's' => "...",
            't' => "-",
            'u' => "..-",
            'v' => "...-",
            'w' => ".--",
            'x' => "-..-",
            'y' => "-.--",
            'z' => "--.."
        ];
        #轉換
        $words = str_replace(array_keys($en),array_values($en),$words);
        #去除重複項
        $words = array_unique($words);
        #計算數量
        return count($words);
    }
}
