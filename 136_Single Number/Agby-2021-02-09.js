Runtime: 84 ms, faster than 87.08% of JavaScript online submissions for Single Number.
Memory Usage: 41.5 MB, less than 64.67% of JavaScript online submissions for Single Number.

/**
 * @param {number[]} nums
 * @return {number}
 */
var singleNumber = function(nums) {
  nums.sort((a,b) => a > b ? 1 : -1)

  for(let i=0; i < nums.length; i+=2) {
    if (nums[i] !== nums[i+1]) {
      return nums[i]
    }
  }
  
  return false
};
