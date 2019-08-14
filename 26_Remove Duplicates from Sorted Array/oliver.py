class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        last_num = None
        if len(nums) != 0:
            abandon_count = self.approach2(nums)
            nums = nums[0:len(nums)-abandon_count]
        return len(nums)

    def approach2(self, nums):
        FIRST_TURN = 0
        abandon_count = 0
        list_end_index = len(nums) - 1
        list_start_index = 0
        while True:
            if list_start_index != FIRST_TURN:
                if last_num == nums[list_start_index]:
                    nums.remove(last_num)
                    nums.append(last_num)
                    abandon_count += 1
                    list_start_index -= 1
                    list_end_index -= 1
            last_num = nums[list_start_index]
            list_start_index += 1
            if list_start_index > list_end_index:
                break
        return abandon_count