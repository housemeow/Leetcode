class Solution:
    def isValid(self, s: str) -> bool:
        while(re.search("\(\)|\[\]|\{\}", s)):
            s = re.sub("\(\)|\[\]|\{\}", "", s)
        if len(s) == 0:
            return True
        else:
            return False
        