Runtime: 76 ms, faster than 88.78% of JavaScript online submissions for Verifying an Alien Dictionary.
Memory Usage: 41 MB, less than 7.86% of JavaScript online submissions for Verifying an Alien Dictionary.

var isAlienSorted = function(words, order) { 
  const originOrder = Array.from("abcdefghijklmnopqrstuvwxyz")
  const alienOrder = Array.from(order)
  const parseMap = new Map()
  let res = true 
  
  for (let i = 0; i < originOrder.length ;i++) {
     parseMap.set(alienOrder[i],originOrder[i])
  }
  
  const parsedWords = words.map((word) => {
    let newWord = ''
    for (letter of word) {
      newWord += parseMap.get(letter)
    }
    return newWord
  })

  const sortedWords = parsedWords.slice().sort()
  
  for (let j = 0; j < sortedWords.length; j++){
    if(sortedWords[j] !== parsedWords[j]) {
      res=false
      break
    }
  }
  return res
}
    
