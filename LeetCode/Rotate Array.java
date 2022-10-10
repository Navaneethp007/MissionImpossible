/*      LeetCode problem no. 189-Rotate Array
*  Given an array, rotate the array to the right by k steps, where k is non-negative.
* In simpler words, need to shift 'k' elements from RHS of the array to LHS and it should in-place operation, that means no extra space should be used.
*
* Example 
* Input: nums = [1,2,3,4,5,6,7], k = 3
* Output: [5,6,7,1,2,3,4]
* Explanation:
* rotate 1 steps to the right: [7,1,2,3,4,5,6]
* rotate 2 steps to the right: [6,7,1,2,3,4,5]
* rotate 3 steps to the right: [5,6,7,1,2,3,4]
*
*
*/

$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

Solution Approach: 
  nums = [1,2,3,4,5,6,7]
# Step 1: Reverse entire array: 
    nums = [7,6,5,4,3,2,1]

# Step 2: reverse the first k elements: (k = 3)
    nums: [5,6,7,4,3,2,1]

# Step 3: reverse k+1 to n-1 elements: 
    nums:  [5,6,7,1,2,3,4] 
    Bingo!! got the desired output!! 🤩 🤩

$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

Code:

class Solution {

    private void reverse(int[] arr, int start, int end){
        int t;
        while(start<end){
            t = arr[start];
            arr[start] = arr[end];
            arr[end] = t;

            start++;
            end--;
        }
    }
    public void rotate(int[] nums, int k) {
        k = k % nums.length;              // performing modulus as k can be greater than array length and also, after a while reversed array would be repeating.
        reverse(nums, 0, nums.length-1);    //step 1
        reverse(nums, 0, k-1);              //step 2
        reverse(nums, k, nums.length-1);    //step 3

    }
}
