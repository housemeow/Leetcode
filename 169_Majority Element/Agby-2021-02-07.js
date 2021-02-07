Runtime: 72 ms, faster than 99.25% of JavaScript online submissions for Majority Element.
Memory Usage: 40.8 MB, less than 79.26% of JavaScript online submissions for Majority Element.

var majorityElement = function(nums) {
  const memo = new Map()
  let resKey = nums[0]
  
  nums.forEach((a, index) => {
    if(memo.has(a)) {
      const acc = memo.get(a) + 1
      
      if (acc > nums.length / 2 + 1 ) return a
      
      memo.set(a, acc )
      
      if (acc > memo.get(resKey)) {
        resKey = a
      }

    } else {
      memo.set(a,1)
    }
  })
  
  return resKey
};
