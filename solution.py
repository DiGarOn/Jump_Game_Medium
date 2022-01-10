class Solution:
    def canJump(nums) -> bool:
        min_len = 1
        for i in range(len(nums) - 2, -1, -1):
            if(nums[i] >= min_len):
                min_len = 0
            min_len += 1
        return(nums[0] >= min_len or len(nums) == 1)
nums = [2,3,1,1,4]
print(Solution.canJump(nums))