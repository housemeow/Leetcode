class Solution:
    """
    strs: list<string>
    strs length = 0時，擋下，直接回傳空字串
    strs length = 1時，因為List裡面只有一組string，longest prefix就應該會是這一組string
    取出最短的string shortest_str
    以shortest_str為基準取出prefix，比較其餘的string是否含有此prefix
    """
    def longestCommonPrefix(self, strs) -> str:
        if len(strs) == 0:
            return ""
        if len(strs) == 1:
            return strs[0]
        # 取出最短的string，並從list移除此string
        shortest_str = self.getShortestStr(strs)
        strs.pop(0)

        prefix = ""
        break_flag = False
        # index為取到第幾個char
        for index in range(1, len(shortest_str)+1):
            prefix = shortest_str[0:index]
            for s in strs:
                # 有1個string沒有相同的prefix，直接清空prefix並跳出
                if prefix != s[0:index]:
                    prefix = prefix[0:index-1]
                    break_flag = True
                    break
            if break_flag:
                break
        return prefix


    def getShortestStr(self, strs) -> str:
        # 排序，小到大
        strs.sort(key = lambda s : len(s))
        return strs[0]
