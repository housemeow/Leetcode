//2021/06/19

var fib = function(n) { 
  if( n < 2 ) return n
  
  let last2 = 0
  let last1 = 1
  
  for (let i = 2; i < n; i++) {
    [last2, last1] = [last1, last1 + last2]
  }
  
   return last2 + last1
};




// 2021/01/23

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
