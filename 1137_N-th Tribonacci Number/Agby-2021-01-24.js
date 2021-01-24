Runtime: 64 ms, faster than 99.26% of JavaScript online submissions for N-th Tribonacci Number.
Memory Usage: 38.2 MB, less than 79.63% of JavaScript online submissions for N-th Tribonacci Number.

var tribonacci = function(n) {
  if(n==0) return 0
  
  const arr = [0,1,1]
  
  for(let i=2;i<n;i++) {
    arr.push(arr[i] + arr[i-1]+ arr[i-2])
  }
  
  return arr[arr.length - 1]
};
