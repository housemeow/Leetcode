Runtime: 96 ms, faster than 88.71% of JavaScript online submissions for Minimum Remove to Make Valid Parentheses.
Memory Usage: 48.5 MB, less than 35.51% of JavaScript online submissions for Minimum Remove to Make Valid Parentheses.

var minRemoveToMakeValid = function(s) {
    const matchMap = new Map()
    matchMap.set('(', ')')
    matchMap.set('{', '}')
    matchMap.set('[', ']')
    
    const parenthesesArr = ['(',')','[',']','{','}']
    const isParentheses = (letter) => parenthesesArr.includes(letter)
    const strArr = Array.from(s)
    const stackPool = []
    
    for (let index=0; index<strArr.length; index++) {
      const letter = strArr[index]

      if (isParentheses(letter)) {
        if (stackPool.length === 0 ) {
          stackPool.push([letter, index]) 
        } else {
          const match = matchMap.get(stackPool[stackPool.length - 1][0]) === letter
          match ? stackPool.pop() : stackPool.push([letter, index])
        }
      }
    }
    
    if (stackPool.length === 0) return s
    
    const filterIndex = new Map()
    stackPool.forEach(val => filterIndex.set(val[1], true))
  
    let res = ''
    
    strArr.forEach((letter, index) => { 
      if (!filterIndex.has(index)) {
        res = res + letter
      }
    })
  
    return res
  
};
