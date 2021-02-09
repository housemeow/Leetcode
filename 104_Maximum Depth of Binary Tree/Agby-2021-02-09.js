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
