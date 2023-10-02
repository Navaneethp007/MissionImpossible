## Question 10
A peak element is an element that is strictly greater than its neighbors. Given a 0-indexed integer array nums, find a peak element, and return its index. 
If the array contains multiple peaks, return the index to any of the peaks. You may imagine that nums[-1] = nums[n] = -∞. In other words, an element is always 
considered to be strictly greater than a neighbor that is outside the array. You must write an algorithm that runs in O(log n) time.

Input Format
- A list of integers nums separated by spaces.

Constraints
- 1 <= nums.length <= 1000
- -231 <= nums[i] <= 231 - 1
- nums[i] != nums[i + 1] for all valid i.

Output Format
- An integer representing the index of the peak element in the nums array.

Sample Input 0
- 1 3 20 4 1

Sample Output 0
- 2

Explanation 0
- 20 is a peak element and your function should return the index number 2.
