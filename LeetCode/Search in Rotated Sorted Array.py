class Solution:
    def search(self, nums: List[int], target: int) -> int:
        f=0
        t=0
        for i in nums:
            if i==target:
                f=1
                t=nums.index(i)
                break
        if f==1:
            return t
        else:
            return -1
        