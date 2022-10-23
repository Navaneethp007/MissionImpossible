/* Problem Link: https://leetcode.com/problems/search-in-rotated-sorted-array-ii/

Problem Statement: There is an integer array nums sorted in non-decreasing order (not necessarily with distinct values).
  Before being passed to your function, nums is rotated at an unknown pivot index k (0 <= k < nums.length) such that the resulting array is 
  [nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example, [0,1,2,4,4,4,5,6,6,7] might be rotated at pivot index 5
  and become [4,5,6,6,7,0,1,2,4,4].

  Given the array nums after the rotation and an integer target, return true if target is in nums, or false if it is not in nums. 
  You must decrease the overall operation steps as much as possible.

Example:
  Input: nums = [2,5,6,0,0,1,2], target = 0
  Output: true
  
  Input: nums = [2,5,6,0,0,1,2], target = 3
  Output: false


Solution Approach:
  
  The statement is quite big and might be confusing as well. But when we observe carefully at the examples, we found that we've to return either true or false in we 
  are able to find the target in the array or not. The rotation part has already taken care by platform itself.
  
  Thus, after obseration problem has become somewhat easy now.!! Let's code.

*/

Code:
class Solution {
    public boolean search(int[] nums, int target) {
        for(int i=0;i<nums.length;i++){
            if(nums[i] == target)
                return true;        //as soon as we found the target return true, no need to check after it.
        }
        return false;             //if we couldn't find the target we need to return false, hence keeping this condition as final one, and breaking the program flow 
                                  //at line 33 as well if found it.
    } 
}



