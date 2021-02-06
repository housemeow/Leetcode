Runtime: 1584 ms, faster than 14.17% of JavaScript online submissions for 3Sum.
Memory Usage: 55.6 MB, less than 13.30% of JavaScript online submissions for 3Sum.

/**
 * @param {number[]} nums
 * @return {number[][]}
 */
var threeSum = function(nums) {
  if (nums.length < 3) return []
  
  nums.sort((a,b) => a > b ? 1 : -1)
  
  let left = 0
  let right = nums.length - 1
  let res = new Map()

  while (left < right) {
    const sum = nums[left] + nums[right]
    let mid = -1
    
    for (let i = left + 1; i < right; i++) {
      if (nums[i] === sum * -1) {
        mid = i
        res.set((nums[left]+'@'+nums[mid]+'@'+nums[right]), undefined)
        break
      }
      if (nums[i] > sum * -1) {
        break
      }
    }
    
    if (mid === -1 && nums[right] + nums[right-1] < nums[left] * -1){
      left++ 
      while(nums[left] === nums[left-1]) {
        left++
      }
      while(nums[right] + nums[right+1] >= nums[left] * -1) {
        right++
      }
    } else {
      right--
    }
  }
  const resArr = []

  res.forEach((value, key) =>  resArr.push(key.split('@')))
  
  return  resArr

};
