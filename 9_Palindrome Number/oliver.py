class Solution:
    def isPalindrome(self, x: int) -> bool:
        # 負數直接跳過
        if x < 0: 
            return False
        inputStr = str(x)
        for index, c in enumerate(inputStr):
            if index >= len(inputStr)/2:
                break
            if c != inputStr[len(inputStr)-1-index]:
                return False
        return True