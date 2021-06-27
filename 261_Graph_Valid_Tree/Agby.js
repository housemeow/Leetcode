// 2021/06/27


var validTree = function(n, edges) {
    if(edges.length < n - 1) return false
  
    const parents = initParents(n)
  
    for ([x, y] of edges) {
      const res = union(x, y, parents)
      
      if (!res) return false 
    }
    
    return parents.filter(val => val === 'root').length === 1
};

const initParents = (n) => new Array(n).fill('root')

const getRoot = (key, parents) => {
  return parents[key] === 'root' ? key : getRoot(parents[key], parents) 
}

const union = (x, y, parents) => {
  const rootX = getRoot(x, parents)
  const rootY = getRoot(y, parents)
  
  if (rootX === rootY && rootX !== 'root') {
    return 0  // merge fail, in same set
  }
  
  parents[rootX] = rootY
  return 1
  
}
