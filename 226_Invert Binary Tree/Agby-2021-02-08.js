Runtime: 68 ms, faster than 98.56% of JavaScript online submissions for Invert Binary Tree.
Memory Usage: 39 MB, less than 20.55% of JavaScript online submissions for Invert Binary Tree.

var invertTree = function(root) {
  const dfsAndReverse = (node) => {
    if (!node) return
    
    dfsAndReverse(node.left);
    dfsAndReverse(node.right);
    
    [node.left, node.right] = [node.right, node.left]
    
    return
  }
  
  dfsAndReverse(root)
  
  return root
};
