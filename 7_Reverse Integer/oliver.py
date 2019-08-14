class Solution:
    def reverse(self, x: int) -> int:
        minus_flag = False
        if x < 0:
            minus_flag = True
        try:
            num_str = str(abs(x))
            result_num = int(self.reverse_slicing(num_str))
            if minus_flag:
                result_num = 0-result_num
            if result_num > 2147483647 or result_num < -2147483648:
                raise Exception()
            return result_num
        except Exception as err:
            return 0
    #     反轉str
    def reverse_slicing(self, s):
        return s[::-1]
        