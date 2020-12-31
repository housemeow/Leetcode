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
