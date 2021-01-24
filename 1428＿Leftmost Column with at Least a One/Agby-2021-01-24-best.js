// Runtime: 68 ms, faster than 98.99% of JavaScript online submissions for Leftmost Column with at Least a One.
// Memory Usage: 39.1 MB, less than 84.15% of JavaScript online submissions for Leftmost Column with at Least a One.

/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * function BinaryMatrix() {
 *     @param {integer} row, col
 *     @return {integer}
 *     this.get = function(row, col) {
 *         ...
 *     };
 *
 *     @return {[integer, integer]}
 *     this.dimensions = function() {
 *         ...
 *     };
 * };
 */

/**
 * @param {BinaryMatrix} binaryMatrix
 * @return {number}
 */
var leftMostColumnWithOne = function(binaryMatrix) {
    const [rowNum, colNum] = binaryMatrix.dimensions()
    let res = -1
    
    for (let i=0; i<rowNum; i++) {
      if (binaryMatrix.get(i, colNum - 1) === 1) {
        if (res === -1) res = colNum - 1 
        
        for(let j= res - 1; j >= 0; j--) {
           if (binaryMatrix.get(i, j) === 1) {
             res = j
           } else {
             break
           }
        }
      }
      if(res === 0) break
    }
  
    return res
};
