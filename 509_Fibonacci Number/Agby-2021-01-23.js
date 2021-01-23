Runtime: 60 ms, faster than 99.90% of JavaScript online submissions for Fibonacci Number.
Memory Usage: 38.3 MB, less than 78.64% of JavaScript online submissions for Fibonacci Number.

var fib = function (n) {
  // res = fibonacci [n] 1 2 3 5 8 13... 
  
  if (n === 0) return 0
  
  let last_1 = 0
  let last = 0
  let res = 1
  
  for (let i=1; i<n; i++) {
    last_1 = last
    last = res
    res = last + last_1
  }
  
  return res
};
