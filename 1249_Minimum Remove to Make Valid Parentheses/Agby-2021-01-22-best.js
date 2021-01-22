/**
 * @param {string} s
 * @return {string}
 */
var minRemoveToMakeValid = function(s) {
    const matchMap = new Map()
    matchMap.set('(', ')')
    matchMap.set('{', '}')
    matchMap.set('[', ']')
    matchMap.set(')', false)
    matchMap.set(']', false)
    matchMap.set('}', false)

    const strArr = Array.from(s)
    const stackPool = []
    
    for (let index=0; index<strArr.length; index++) {
      const letter = strArr[index]

      if (matchMap.has(letter)) {
        if (stackPool.length === 0 ) {
          stackPool.push([letter, index]) 
        } else {
          const match = matchMap.get(stackPool[stackPool.length - 1][0]) === letter
          match ? stackPool.pop() : stackPool.push([letter, index])
        }
      }
    }
    
    if (stackPool.length === 0) return s
    
    
    let res = s
    
    stackPool.forEach(([key, filterIndex], offset) =>{
      res = res.slice(0, filterIndex-offset) + res.slice(filterIndex+1-offset)
    })
  
    return res
  
};
