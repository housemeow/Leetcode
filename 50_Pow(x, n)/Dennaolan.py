class Solution:
    def myPow(self, x: float, n: int) -> float:
        ans = 1
        loop_n = abs( n )
        
        if n == 0:
            return ans
        else:
            while loop_n > 0:
                if loop_n % 2 == 0:
                    ans = ans
                else:
                    ans = ans * x
                x = x * x   
                loop_n = int( loop_n / 2 )

            if n > 0:
                return ans
            else:
                return 1/ans
