// 2021/06/18
var twoSum = function(nums, target) {
    const targetMap = new Map()
    
    for (let index = 0; index < nums.length; index ++) {
      const current = nums[index]
      const lookingFor = target - current
      
      if (targetMap.has(lookingFor)) {
        return [targetMap.get(lookingFor), index]
      }
      
      targetMap.set(current, index)
    }
  
    return []
};




// not remeberd
let twoSum = function (nums, target) {
  let i = 0;
  let ans;

// -1 就是一個偷吃步
  while (i < nums.length - 1) {
    let j = i + 1;
    while (j < nums.length) {
      if (nums[i] + nums[j] === target) {
        ans = [i, j];
        break;
      }
      j++;
    }
    if (ans) {
      return ans;
    }
    i++;
  }
};
