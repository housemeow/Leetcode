Runtime: 76 ms, faster than 99.36% of JavaScript online submissions for Add Strings.
Memory Usage: 40.2 MB, less than 93.52% of JavaScript online submissions for Add Strings.

/**
 * @param {string} num1
 * @param {string} num2
 * @return {string}
 */
var addStrings = function(num1, num2) {
   const arr1 = num1.split("").reverse()
   const arr2 = num2.split("").reverse()
   const res = []
   let carry = 0
   let i = 0
   
   while(i < arr1.length || i < arr2.length || carry === 1) {
     const n1 = Number(arr1[i]) || 0
     const n2 = Number(arr2[i]) || 0
     let sum = n1 + n2 + carry 
     
     carry = 0
     
     if (sum > 9 ) {
      sum = sum - 10 
      carry = 1
     }

     res.push(sum.toString())
     
     i++
   }
   
  return res.reverse().join('')
   
};
