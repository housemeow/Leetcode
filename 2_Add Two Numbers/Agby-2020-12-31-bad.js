var addTwoNumbers = function(l1, l2, shouldCarry=0) {
  const value1 = l1 && l1.val ? l1.val : 0
  const value2 = l2 && l2.val ? l2.val : 0
  const sum = (value1 + value2 + shouldCarry) % 10
  const carry =  parseInt((value1 + value2 + shouldCarry) / 10)
  
  if (l1 || l2 || sum || carry) {
    next = addTwoNumbers(l1 && l1.next, l2 && l2.next, carry)
    
    return new ListNode(sum, next)
  }
  return null
};
