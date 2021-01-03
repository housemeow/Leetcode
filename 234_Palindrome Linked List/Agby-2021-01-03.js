Runtime: 84 ms, faster than 75.76% of JavaScript online submissions for Palindrome Linked List.
Memory Usage: 43.3 MB, less than 29.88% of JavaScript online submissions for Palindrome Linked List.

var isPalindrome = function(head) {
  const arr = []
  let here = head
  
  while(here !== null) {
    arr.push(here.val)
    here = here.next
  }
  
  if (arr.length < 2) return true
  
  let leftPoint = 0
  let rightPoint = arr.length -1

  while (rightPoint - leftPoint > (arr.length % 2 > 0 ? 0 : 1) ) {
    if (arr[rightPoint] === arr[leftPoint]){
      leftPoint++;
      rightPoint--
    } else {
      break
    }
  }

  return arr[rightPoint] === arr[leftPoint]
};
