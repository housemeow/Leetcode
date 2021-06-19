// 2021/06/19

/**
 * @param {string} s
 * @return {boolean}
 */

var isPalindrome = function(s) {
  let left = 0
  let right = s.length - 1
  
  while (left <= right) {
    const leftChar = s[left]
    const rightChar = s[right]
    
    if (!isLetter(leftChar)) {
      left++
      continue
    }
    
    if (!isLetter(rightChar)) {
      right--
      continue
    }
    
    if (leftChar.toLowerCase() === rightChar.toLowerCase()) {
      left++
      right--
      continue
    }
    
    return false
  }
  
  return true
  
};

var isLetter = function(str) {
  if(!str) return false
  
  const code = str.charCodeAt()
  
  if ((code >= 48) && (code <= 57)) return true   // numbers
  if ((code >= 65) && (code <= 90)) return true   // uppercase
  if ((code >= 97) && (code <= 122)) return true  // lowercase
    
  return false

}






// not rememberd

// Runtime: 88 ms, faster than 92.49% of JavaScript online submissions for Valid Palindrome.
// Memory Usage: 41.7 MB, less than 60.67% of JavaScript online submissions for Valid Palindrome.

var isPalindrome = function (s) {
  const text = s.toLowerCase().split('');
  let left = 0;
  let right = text.length - 1;

var isLetter = function(str) {
    const code = str.charCodeAt()
    if (((code >= 48) && (code <= 57))  // numbers
    || ((code >= 65) && (code <= 90))  // uppercase
    || ((code >= 97) && (code <= 122))) {  // lowercase
        return true
    }
    else {
        return false
    }
}

  while (left < right) {
    const leftCheck = isLetter(text[left])  
    const rightCheck = isLetter(text[right]) 
    
    if (!leftCheck) { 
      left++
      continue
    } 
    
    if (!rightCheck) { 
      right--
      continue
    } 
    
    if (text[left] !== text[right]) {
      break;
    } else {
      left++;
      right--;
    }
    
  }

  return left >= right;
};

