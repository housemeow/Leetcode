Runtime: 76 ms, faster than 98.46% of JavaScript online submissions for Move Zeroes.
Memory Usage: 40.4 MB, less than 55.29% of JavaScript online submissions for Move Zeroes.

var moveZeroes = function(nums) {
   for(let i = nums.length - 2; i >= 0; i--) {
      if (nums[i] === 0) {
        nums.splice(i, 1)
        nums.push(0)
      }
   }
};
