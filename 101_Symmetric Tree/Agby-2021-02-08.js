Runtime: 80 ms, faster than 97.27% of JavaScript online submissions for Symmetric Tree.
Memory Usage: 40.7 MB, less than 16.73% of JavaScript online submissions for Symmetric Tree.

var isSymmetric = function(root) {
  const dfs = (node, type) => {
    if (!node) return 'null';

    const left = dfs(node.left, type);
    const right = dfs(node.right, type);
  
    return type ? node.val.toString() + left + right : node.val.toString() + right + left
  }
  
  let resLeft =  dfs(root?.left, true) 
  let resRight =  dfs(root?.right, false);
  
  return resLeft === resRight
};
