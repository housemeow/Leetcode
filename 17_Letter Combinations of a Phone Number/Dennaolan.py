class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        numArray = [ [],
                     [],
                     [ 'a', 'b', 'c' ],
                     [ 'd', 'e', 'f' ],
                     [ 'g', 'h', 'i' ],
                     [ 'j', 'k', 'l' ],
                     [ 'm', 'n', 'o' ],
                     [ 'p', 'q', 'r', 's' ],
                     [ 't', 'u', 'v' ],
                     [ 'w', 'x', 'y', 'z' ]
                   ]

        src = []

        for i in range( len(digits) ):
            src.append( numArray[int(digits[i])] )
        
        temp = ''
        ans = []
        if len( digits ) > 0:
            for i in src[0]:
                temp += i
                if len( digits ) > 1:
                    for j in src[1]:
                        temp += j
                        if len( digits ) > 2:
                            for k in src[2]:
                                temp += k
                                if len( digits ) > 3:
                                    for l in src[3]:
                                        temp += l
                                        ans.append( temp )
                                        temp = temp[:-1]
                                else:
                                    ans.append( temp )
                                temp = temp[:-1]
                        else:
                            ans.append( temp )
                        temp = temp[:-1]
                else:
                    ans.append( temp )
                temp = temp[:-1]
        else:
            pass

        return ans
