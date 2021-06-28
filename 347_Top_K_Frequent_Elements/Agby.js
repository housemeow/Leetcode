// 2021/06/28 沒天份暴力解

/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number[]}
 */
var topKFrequent = function(nums, k) {
  const counter = new Map([['*', -1]]) 
  const ranking = Array(k).fill('*')
  const inRanking = new Set()
  
  for (key of nums) {
    const preCount = counter.get(key) || 0
    const count = preCount + 1 

    counter.set(key, count)
    
    if (!inRanking.has(key) && count > counter.get(ranking[ranking.length - 1])) {
      const outKey = ranking.pop()
      
      inRanking.delete(outKey)
      ranking.push(key)
      inRanking.add(key)
    } 
    
    if(inRanking.has(key)) {
      ranking.sort((a, b) => counter.get(b) - counter.get(a))
    }
    
  }
  
  return ranking
};
