Runtime: 72 ms, faster than 98.90% of JavaScript online submissions for Reverse Linked List.
Memory Usage: 41 MB, less than 10.61% of JavaScript online submissions for Reverse Linked List.

var reverseList = function (head) {
  let last = null;
  let next 

  while (head !== null) {
    next = head.next
    head.next = last;
    last = head
    head = next
  }
  
  return last;
};
