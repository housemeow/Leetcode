// 2020/06/26

/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {number[]} preorder
 * @param {number[]} inorder
 * @return {TreeNode}
 */

var buildTree = function(preorder, inorder) {
  const { left: inorderLeft , right: inorderRight } = getInorderChildren(inorder, preorder[0])
  const { left: preorderLeft, right: preorderRight } = getPreOrderChildren(preorder, inorderLeft.length)

  const left = preorderLeft.length > 0 ? buildTree(preorderLeft, inorderLeft) : (preorderLeft[0])
  const right = preorderRight.length > 0 ? buildTree(preorderRight, inorderRight) : (preorderRight[0])

  return new TreeNode(preorder[0], left, right)
};

const getInorderChildren = (inorderArr, root) => {
  if(!inorderArr || isNaN(Number(root))) return null

  const rootIndex = inorderArr.indexOf(root)

  if (rootIndex === -1) return null

  const left = inorderArr.slice(0, rootIndex) 
  const right = inorderArr.slice(rootIndex + 1)

  return { left, right }
}

const getPreOrderChildren = (preorderArr, splitIndex) => {
  const [root, ...preorderBody] = preorderArr
  
  return { left: preorderBody.slice(0, splitIndex) , right: preorderBody.slice(splitIndex) }
}















