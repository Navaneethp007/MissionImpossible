/*
You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.


* @param {number[]} height
 * @return {number}
 */
let maxArea = function (height) {
  let right = height.length - 1,
    left = 0,
    maxarea = 0;
  while (left < right) {
    let width = right - left;
    maxarea = Math.max(maxarea, Math.min(height[left], height[right]) * width);
    if (height[left] <= height[right]) {
      left++;
    } else {
      right--;
    }
  }

  return maxarea;
};
