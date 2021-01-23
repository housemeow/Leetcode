// Runtime: 68 ms, faster than 96.68% of JavaScript online submissions for Climbing Stairs.
// Memory Usage: 38.3 MB, less than 79.79% of JavaScript online submissions for Climbing Stairs.

var climbStairs = function (n) {
  // res = fibonacci [n] 1 2 3 5 8 13... 
  
  let last_1 = 1
  let last = 1
  let res = 1
  
  for (let i=1; i<n; i++) {
    last_1 = last
    last = res
    res = last + last_1
  }
  
  return res
};
