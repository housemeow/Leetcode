Runtime: 84 ms, faster than 98.17% of JavaScript online submissions for Reverse Integer.
Memory Usage: 40.2 MB, less than 64.78% of JavaScript online submissions for Reverse Integer.

var reverse = function(x) {
    const num = Number(Math.abs(x).toString().split('').reverse().join(''))
    
    if(num > Math.pow(2,31)) return 0
    
    return x > 0 ? num : -num
  
};
