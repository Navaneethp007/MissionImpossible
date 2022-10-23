'''
Problem Link: https://leetcode.com/problems/median-of-two-sorted-arrays/
Level: Hard

Problem Statement: Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.
Constraint:   The overall run time complexity should be O(log (m+n)).

Example:
  Input: nums1 = [1,2], nums2 = [4,3]
  Output: 2.50000
  Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.
  

Solution Approach:
  1. Combine both the lists into one, then sort it.
      nums1 = [1,2,3,4]
  2. Use the median formula: 
      Median = {(n + 1) / 2}th term, if n is odd..
               {(n/2) + (n/2 + 1) / 2}th term if n is even..
              
'''

Code:
  
  class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        for i in nums2:
            nums1.append(i)       #step 1
                   
        nums1.sort()
        lengthOfMergedList = len(nums1)
        mid = (lengthOfMergedList-1)//2         
        if(lengthOfMergedList % 2 == 0):
            return (nums1[mid] + nums1[mid + 1]) / 2
        else:
            return nums1[mid]

