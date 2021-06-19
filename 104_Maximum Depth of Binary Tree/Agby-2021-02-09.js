// 2021/06/20
var maxDepth = function(root) { 
  if (!root) return 0
  
  const left = maxDepth(root.left)
  const right = maxDepth(root.right)
  
  return (left > right ? left : right) + 1 
};


// 2021/02/09
Runtime: 80 ms, faster than 94.65% of JavaScript online submissions for Maximum Depth of Binary Tree.
Memory Usage: 41.8 MB, less than 25.30% of JavaScript online submissions for Maximum Depth of Binary Tree.

var maxDepth = function(root) {
    const dfs = (node, depth) => {
      if (!node) return depth
      
      const left = dfs(node?.left, depth + 1)
      const right = dfs(node?.right, depth + 1)
      
      return left > right ? left : right 
    }
  
    return dfs(root, 0)
};
