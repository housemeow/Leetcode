Runtime: 84 ms, faster than 93.52% of JavaScript online submissions for Diameter of Binary Tree.
Memory Usage: 41.7 MB, less than 86.59% of JavaScript online submissions for Diameter of Binary Tree.

/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number}
 */
var diameterOfBinaryTree = function(root) {
    if (root?.val == null) return 0
    let switchRoot = 0
        
    const findDeepth = (node, current) => {
      const leftDeepth = node.left === null ? current : findDeepth(node.left, current + 1)
      const rightDeepth = node.right === null ? current : findDeepth(node.right, current + 1)
      const asRoot = leftDeepth - current + rightDeepth - current
      
      if (switchRoot < asRoot) {
        switchRoot = asRoot
      }

      return leftDeepth > rightDeepth ? leftDeepth : rightDeepth
    }
    
    return Math.max(findDeepth(root, 0), switchRoot)
};
