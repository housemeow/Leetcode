/**
 * @param {number[]} nums
 * @return {number[]}
 */
var productExceptSelf = function(nums) {
    const result = new Array(nums.length)
    result[0] = 1
    for (let i = 1; i < nums.length; i++) {
        result[i] = result[i-1] * nums[i-1]
    }
    
    let right = 1
    for (let i = nums.length - 1; i >= 0; i--) {
        result[i] = result[i] * right
        right *= nums[i]
    }
    
    return result
};
