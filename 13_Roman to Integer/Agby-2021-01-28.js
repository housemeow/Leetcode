// Runtime: 152 ms, faster than 95.40% of JavaScript online submissions for Roman to Integer.
// Memory Usage: 44.6 MB, less than 89.17% of JavaScript online submissions for Roman to Integer.

/**
 * @param {string} s
 * @return {number}
 */


  const convertMap = new Map([
    ['I', 1],
    ['V', 5],
    ['X', 10],
    ['L', 50],
    ['C', 100],
    ['D', 500],
    ['M', 1000],
  ])
  
var romanToInt = function(s) {
  let res = 0
  
  for (let i = s.length - 1 ; i >= 0 ; i--) {
    const last = convertMap.get(s[i + 1]) || -1
    
    if (convertMap.get(s[i]) < last) {
      res -= convertMap.get(s[i])
    } else {
      res += convertMap.get(s[i])
    }

  }
  
  return res
};
