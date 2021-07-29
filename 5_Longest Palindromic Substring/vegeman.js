/**
 * @param {string} s
 * @return {string}
 */
var longestPalindrome = function(s) {
    let start = 0
    let end = 0
    for (let i = 0; i < s.length; i++) {
        let result1 = examineString(i, i, s)
        let result2 = examineString(i, i+1, s)
        let result = Math.max(result1, result2)
        if ((end - start) < result) {
            start = i - Math.floor(((result - 1) / 2))
            end = i + Math.floor((result / 2))
        }
    }
    return s.slice(start, end+1)
};

function examineString(left, right, s) {
    while (left >= 0 && right < s.length && s[left] === s[right]) {
        left--
        right++
    }
    return right - left - 1
}
