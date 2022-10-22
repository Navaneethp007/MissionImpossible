class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        summ, maxx = 0, nums[0]
        for num in nums:
            summ += num
            maxx = max(summ,maxx)
            if summ<0:summ = 0
        return maxx
        