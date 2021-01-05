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

