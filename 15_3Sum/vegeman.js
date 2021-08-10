/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var threeSum = function(nums) {
    nums.sort((a,b) => a - b)
    const result = []
    for (let i = 0; i < nums.length-2; i++) {
        if (i === 0 || (nums[i] !== nums[i-1])) {
            let low = i + 1
            let high = nums.length - 1
            let sum = 0 - nums[i]
            
            while(low < high) {
                if (sum === (nums[low] + nums[high])) {
                    result.push([nums[i], nums[low], nums[high]])
                    while(nums[low] === nums[low+1]) low++
                    while(nums[high] === nums[high-1]) high--
                    low++
                    high--
                }
                if (sum > (nums[low] + nums[high])) {
                    while(nums[low] === nums[low+1]) low++
                    low++
                } else if (sum < (nums[low] + nums[high])) {
                    while(nums[high] === nums[high-1]) high--
                    high--
                }
            }
        }
    }
    return result
};
