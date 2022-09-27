/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
    const map = new Map()
    
    for (let i = 0; i < nums.length; i++) {
        const value = nums[i]
        const otherValue = target - value
        
        if (map.has(otherValue)) {
            return [map.get(otherValue), i]
        }
        
        map.set(value, i)
    }
}
