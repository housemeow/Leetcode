// without partA
Runtime: 72 ms, faster than 97.31% of JavaScript online submissions for Two Sum II - Input array is sorted.
Memory Usage: 39.2 MB, less than 13.58% of JavaScript online submissions for Two Sum II - Input array is sorted.

// with partA
Runtime: 80 ms, faster than 72.36% of JavaScript online submissions for Two Sum II - Input array is sorted.
Memory Usage: 39.2 MB, less than 23.71% of JavaScript online submissions for Two Sum II - Input array is sorted.

var twoSum = function(numbers, target) {
  let leftPointer = 0
  let rightPointer = numbers.length - 1 
  
  // partA start
  numbers.forEach((item,index) => {
    const  sum = item + numbers[0]
    // update rightPoint
    if ( 
      (index != 0) && 
      (index === numbers.length - 1) || 
      (sum < target && (numbers[0] + numbers[index+1] > target))) {
      rightPointer = index
    }
  })
  // partA end
  
  while(leftPointer !== rightPointer) {
    const sum = numbers[leftPointer] + numbers[rightPointer]
    
    if (sum === target) {
      break
    } else if (sum > target) {
      rightPointer--
    } else {
      leftPointer++
    }
  }
  
  return [leftPointer+1, rightPointer+1]
};
