// 2021/06/27

var cloneGraph = function (graph) {
  var map = {};
  return traverse(graph);

  function traverse(node) {
    if (!node) return node;
    if (!map[node.val]) {
      map[node.val] = new Node(node.val);
      map[node.val].neighbors = node.neighbors.map(traverse);
    }
    return map[node.val];
  }
}
