# Problem Link: https://leetcode.com/problems/minimum-time-to-make-rope-colorful/

class Solution:
    def minCost(self, colors: str, neededTime: List[int]) -> int:
        ans = sum(neededTime)
        prev = None 
        maxi = 0
        for i, color in enumerate(colors):
            if color == prev:
                maxi = max(maxi, neededTime[i])
            else:
                ans -= maxi
                maxi = neededTime[i]
                prev = color 
        else:
            ans -= maxi 
                
        return ans
