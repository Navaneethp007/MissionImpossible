/*
Problem Link: https://leetcode.com/problems/single-element-in-a-sorted-array/

Problem Statement: You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.
Return the single element that appears only once.

Constraint: Your solution must run in O(log n) time and O(1) space.


Example :
Input: nums = [1,1,2,3,3,4,4,8,8]
Output: 2, as only 2 is appearing one time in the input array.

Code Approach:
Using the XOR properties,
- A ^ A = 0,
- A ^ 0 = A.

So, now, as we know above two properties, I can say if in a list an element apprearing twice, and if I am doing XOR, it will definitely going to return 0, or in simple 
terms both the two values are going to cancel out each other. Hence, at last we'll be left with 0 and the element present single time. Again if we do XOR of that element
with 0, we'll get element itself. Hence our answer.!!

*/

Code:
class Solution {
    public int singleNonDuplicate(int[] nums) {
        int result = 0;
        for(int i=0;i<nums.length;i++){
            result = result ^ nums[i];
        }
        
        return result;    //Element appeared only once in the list.
    }
}



