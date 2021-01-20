Runtime: 72 ms, faster than 95.78% of JavaScript online submissions for Valid Parentheses.
Memory Usage: 39.1 MB, less than 31.47% of JavaScript online submissions for Valid Parentheses.

var isValid = function(s) {
  if (s.length % 2 !== 0) return false;

  const matchMap = new Map();
  matchMap.set('(', ')');
  matchMap.set('{', '}');
  matchMap.set('[', ']');
  const strArr = Array.from(s);
  const stack = [];
  
  for (current of strArr) {
    if (stack.length > 0 && current === matchMap.get(stack[stack.length - 1])) {
      stack.pop();
    } else {
      stack.push(current);
    }
    
    // 不會比較快
    // if (stack.length > strArr.length - i   ) {
    //   break
    // }
  }

  return stack.length === 0;
};
