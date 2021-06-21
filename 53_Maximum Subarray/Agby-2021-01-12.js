// 2021/06/21

var maxSubArray = function(nums) {
  if (nums.length === 1) return nums[0]
  
  let res = nums[0]
  let total = nums[0]
  
  for (let i = 1; i < nums.length; i++) {
    const next = total + nums[i]
    
    total = next < nums[i] ? nums[i] : next
    
    if (res < total) {
      res = total
    }
  }

  return res
};

// 2021/01/12

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
