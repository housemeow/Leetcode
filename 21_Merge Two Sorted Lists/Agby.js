//2021-06-18

var mergeTwoLists = function(l1, l2) {
  const root = new ListNode(0, null)
  let current = root
  
  while(l1 && l2) {
    if (l1.val < l2.val) {
      [current.next, l1] = [l1, l1.next]
    } else {
      [current.next, l2] = [l2, l2.next]
    }
    current = current.next
  }
  
  current.next = l1 || l2
  
  return root.next
};



//2021-01-27

Runtime: 84 ms, faster than 92.33% of JavaScript online submissions for Merge Two Sorted Lists.
Memory Usage: 39.5 MB, less than 99.70% of JavaScript online submissions for Merge Two Sorted Lists.

var mergeTwoLists = function(l1, l2) {
  const head = new ListNode()
  let current = head
  
  while (l1 && l2 ) {
    if (l1.val <= l2.val) {
      current.next = l1
      l1 = l1.next
    } else {
      current.next = l2
      l2 = l2.next
    }
    current = current.next
  }
  current.next = l1 || l2
  return head.next
};
