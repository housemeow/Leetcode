// 2021/06/26

/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLongestSubstring = function(s) {
    const records = new Map()
    let start = 0
    let res = 0
    
    const temp = [...s].forEach((val, index) => {      
      if (records.has(val) && records.get(val) >= start ) {
        start = records.get(val) + 1
      }
        
      
      if (res < index - start + 1) {
        res = index - start + 1
      }
      
      records.set(val, index)
      
    })
    
  return res
  
};
