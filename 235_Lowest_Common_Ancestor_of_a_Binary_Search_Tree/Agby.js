// 2021/07/03

var lowestCommonAncestor = function(root, p, q) {
  while(root) {
    if (root.val < p.val && root.val < q.val) root = root.right
    if (root.val > p.val && root.val > q.val) root = root.left
    else break
  }

  return root
}
    
