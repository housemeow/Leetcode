Runtime: 80 ms, faster than 89.26% of JavaScript online submissions for Maximum Subarray.
Memory Usage: 39.3 MB, less than 46.88% of JavaScript online submissions for Maximum Subarray.

var maxSubArray = function(nums) {
  if (nums.length === 1 ) return  nums[0]

  let i = 0
  let current = 0
  let res = -999

  for (i=0;i < nums.length; i++){
    current = current + nums[i]
    if (current > res) {
      res = current
    }
    if (current <= 0 ) {
      current = 0
    }
  }
   
 return res
};
