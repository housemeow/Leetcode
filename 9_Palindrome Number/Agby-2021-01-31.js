Runtime: 188 ms, faster than 98.99% of JavaScript online submissions for Palindrome Number.
Memory Usage: 48.6 MB, less than 64.82% of JavaScript online submissions for Palindrome Number.

/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
  
    if (x < 0) return false
  
    const reverseX = x.toString().split('').reverse().join('')
    
    return x.toString() === reverseX
};
