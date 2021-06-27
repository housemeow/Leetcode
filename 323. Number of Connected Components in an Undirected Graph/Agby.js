// 2021/06/27

var countComponents = function(n, edges) {
  let graphs = []
  
  L1: for ([start, end] of edges) {
    let added = -1
  
    for (graph of graphs) {
      if (graph.has(start) && graph.has(end)) continue L1
      
      if (graph.has(start) || graph.has(end)) {
        if (added !== -1) {
          added.union(graph)
          graph.clear()
          continue L1
    
        } else {
          graph.add(end)
          graph.add(start) 
          added = graph
        }
      }
    }

    if (added === -1) {
       graphs.push(new Set([start, end]))
    }
  }
  
  let count = 0
  const grab = graphs.reduce((acc, curr) => {
    count+=curr.size
    return acc += curr.size > 0},0)
  const single = n - count 
  
  return grab + single
};

Set.prototype.union = function(setB) {
    for (var elem of setB) {
        this.add(elem);
    }
}
