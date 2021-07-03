var uniquePaths = function(m, n) {
  const dp = Array(m).fill().map(() => Array(n));
  
  for (let indexM = 0; indexM < m; indexM ++) {
    for (let indexN = 0; indexN < n; indexN ++) {
      if(indexN === 0 || indexM === 0) {
        dp[indexM][indexN] = 1
        continue
      }
      
      dp[indexM][indexN] = (dp[indexM - 1 ][indexN] + dp[indexM][indexN - 1])
    }
  }
  
  return dp[m - 1][n - 1]
};
