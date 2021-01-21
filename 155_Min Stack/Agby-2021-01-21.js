Runtime: 116 ms, faster than 90.59% of JavaScript online submissions for Min Stack.
Memory Usage: 45.6 MB, less than 58.96% of JavaScript online submissions for Min Stack.


var MinStack = function () {
  this.arr = [];
  this.min =  this.arr[0] ?? null;
};

/**
 * @param {number} x
 * @return {void}
 */

MinStack.prototype.push = function (x) {
  if (this.min === null || this.min > x) {
    this.min = x;
  }
  return this.arr.push(x);
};

/**
 * @return {void}
 */
  
MinStack.prototype.pop = function () {
  const tmp = this.arr.pop()
  
  if (this.min === tmp) {
    let minNum = null
    this.arr.forEach((num) => {
      if (num < minNum || minNum === null) {
        minNum = num
      }
    })
    this.min = minNum
  }
};

/**
 * @return {number}
 */
MinStack.prototype.top = function () {
  return this.arr[this.arr.length - 1];
};

/**
 * @return {number}
 */
MinStack.prototype.getMin = function () {
  return this.min;
};
