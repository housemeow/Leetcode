// 2021/06/19

var containsDuplicate = function(nums) {
  const mapping = new Map()
  
  for (num of nums) {
    if (mapping.has(num)) return true
    
    mapping.set(num, 0)
  }
  
  return false
}
