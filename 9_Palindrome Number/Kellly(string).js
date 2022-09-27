/**
 * @param {number} x
 * @return {boolean}
 */

var isPalindrome = function(x) {
    if (x < 0) return false
    
    let value = x
    let reversed = 0
    while (value != 0) {
        reversed *= 10
        reversed += value % 10
        value = (value - value % 10) / 10
    }
    
    return x === reversed
}
