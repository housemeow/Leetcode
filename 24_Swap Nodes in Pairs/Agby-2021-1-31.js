Runtime: 72 ms, faster than 93.29% of JavaScript online submissions for Swap Nodes in Pairs.
Memory Usage: 38.7 MB, less than 65.69% of JavaScript online submissions for Swap Nodes in Pairs.

/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var swapPairs = function(head) {

  if (head === null) return null
  if (head.next === null) return head
  let res = head.next 
  
  let current = head
  let lastNode = null
  let lastNode_2 = null

  while (current !== null) {
    if ( lastNode === null ) {
      lastNode = current      
      current = current.next
    } else {
      const tempoaryNode = current.next

      if (lastNode_2 !== null) {
        lastNode_2.next = current
      }
      current.next = lastNode
      
      
      lastNode.next = tempoaryNode
      lastNode_2 = lastNode
      lastNode = null
      current = tempoaryNode
    }
  } 
  
  return res
};
