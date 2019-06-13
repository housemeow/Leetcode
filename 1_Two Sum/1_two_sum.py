class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        result = []
        list_len = len(nums)
        for i in range(list_len):
            remain_sum = target - nums[i]
            for j in range(i+1, list_len):
                if nums[j] == remain_sum:
                    result.append(i)
                    result.append(j)
                    break
            if len(result) != 0:
                break
        return result