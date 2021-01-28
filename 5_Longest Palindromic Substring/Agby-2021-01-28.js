Runtime: 320 ms, faster than 43.34% of JavaScript online submissions for Longest Palindromic Substring.
Memory Usage: 39.9 MB, less than 93.45% of JavaScript online submissions for Longest Palindromic Substring.

/**
 * @param {string} s
 * @return {string}
 */
var longestPalindrome = function(s) {
  let res = s[0]
  const checkEvery = (startOri, endOri) => {
    let start = startOri
    let end = endOri
    while ( start < end ) {
      if(s[start] === s[end]) {
        start ++
        end --
      } else {
        return false
      }
    }
    res = res.length < endOri - startOri + 1 ? s.slice(startOri, endOri + 1) : res
    return true
  }
  
  let lastEndPoint = s.length
  
  for (let startPoint = 0; startPoint < s.length; startPoint ++) {
    const endStart = s.lastIndexOf(s[startPoint])
    let endPoint = s.lastIndexOf(s[startPoint])
   
    while (endPoint > 0) {
      if (res.length < endPoint - startPoint + 1) {
        checkEvery(startPoint, endPoint) 
      } else {
        break
      }
      endPoint = s.lastIndexOf(s[startPoint], endPoint - 1)
    }
  
  }
  
  return res
}
