class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        nums_copy = list(nums)
        for i in range(len(nums_copy)):
            if (target - nums_copy[i]) in nums_copy[i+1:len(nums_copy)]:
                index = nums_copy.index(target - nums_copy[i],i+1)
            
                return[i, index]