class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        #def sub_lists (l):
        #lists = [[]]
        #for i in range(len(nums) + 1):
        #    for j in range(i):
        #        lists.append(nums[j: i])
        #return lists
        
        sub=[[]]
        for i in nums:
            sub+=[j+[i]for j in sub]
        return sub