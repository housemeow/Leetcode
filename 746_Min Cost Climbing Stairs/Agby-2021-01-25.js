// 2021/06/19
// 想很久
var minCostClimbingStairs = function(cost) {
  const start = cost[0] < cost[1] ? cost[0] : cost[1]
  const pathCost = [0, start]
  
  for (let step = 2; step < cost.length; step++) {
    const pathA = pathCost[step - 1] + cost[step]
    const pathB = pathCost[step - 2] + cost[step - 1]
    
    pathCost[step] = pathA < pathB ? pathA : pathB
  }

  return pathCost[cost.length - 1]
};


// 2021/01/25

// Runtime: 76 ms, faster than 97.65% of JavaScript online submissions for Min Cost Climbing Stairs.
// Memory Usage: 39 MB, less than 78.49% of JavaScript online submissions for Min Cost Climbing Stairs.

/**
 * @param {number[]} cost
 * @return {number}
 */
var minCostClimbingStairs = function(cost) {
    if (cost.length === 1) return 0;
    if (cost.length === 2) return Math.min(cost[0], cost[1]);
    
    let minCost_2 = cost[0];
    let minCost_1 = cost[1];
    
    for (let n = 2; n < cost.length; n++) {
        const minCost = cost[n] + Math.min(minCost_1, minCost_2);
        
        minCost_2 = minCost_1;
        minCost_1 = minCost;
    }
        
    return Math.min(minCost_1, minCost_2);

};
