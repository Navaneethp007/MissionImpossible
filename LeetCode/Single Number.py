class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        if len(nums)==1:
            return nums[0]
        else:
            res=0
            for i in range(0,len(nums)):
                res=res^nums[i]
            return res
        