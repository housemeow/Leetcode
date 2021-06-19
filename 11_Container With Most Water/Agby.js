// 2021/06/19

var maxArea = function(height) {
  let left = 0
  let right = height.length - 1
  let res = 0
  
  while (left < right) {
    if (height[left] < height?.[left - 1]) {
      left ++
      continue
    }
    
    if (height[right] < height?.[right + 1]) {
      right --
      continue
    }
    
    const containerWidth = right - left
    const containerHeight = height[right] > height[left] ? height[left] : height[right]
    const sum = containerWidth * containerHeight
    
    res = res < sum ? sum : res
    
    if (height[left] > height[right]) {
      right --
      continue
    }
    
    left++
  }
  
  return res
};





//2021/1/1

// 一開始只是想嘗試使用 disscuss 推薦的 two points pattern
// 在做的時候忽然想到如果下一個比這一個更短 那根本連計算都可以跳過 所以才出現了第二層的 while

var maxArea = function(barHeights) {
  let leftPoint = 0 
  let rightPoint = barHeights.length - 1
  let maxContainWater = 0
  
  while(leftPoint !== rightPoint) {
    const height = Math.min(barHeights[leftPoint], barHeights[rightPoint])
  
    maxContainWater = Math.max(height * (rightPoint - leftPoint), maxContainWater)
    
    if (barHeights[leftPoint] > barHeights[rightPoint]) {
      const base = rightPoint
      
      rightPoint--
      
      while (barHeights[rightPoint] <= barHeights[base] && rightPoint > leftPoint) {
        rightPoint-- 
      }
    } else {
      const base = leftPoint
      
      leftPoint++
      while (barHeights[leftPoint] <= barHeights[base] && leftPoint < rightPoint) {
        leftPoint++
      }
    }
  }
  
  return maxContainWater
};
