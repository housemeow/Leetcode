Runtime: 100 ms, faster than 94.75% of JavaScript online submissions for Intersection of Two Linked Lists.
Memory Usage: 47 MB, less than 10.76% of JavaScript online submissions for Intersection of Two Linked Lists.

/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */

/**
 * @param {ListNode} headA
 * @param {ListNode} headB
 * @return {ListNode}
 */

const getIntersectionNode = (headA, headB) => {
  const memo = new Map();
  
  while(headA){
    memo.set(headA, true)
    headA = headA.next;
  }
  
  while(headB){
    if(memo.has(headB))
      return headB;
    headB = headB.next;
  }
  return;
};
