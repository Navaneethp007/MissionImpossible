# Question 8
You are given N whole numbers A1, A2, A3..., AN. The element sum is the sum of all the given numbers. The digit sum is the sum 
of all the digits (not necessarily distinct) of the given numbers.
Print the absolute difference between the element sum and digit sum of nums.

Note that the absolute difference between two integers x and y is defined as |x - y|.

## Input Format
The first line contains the value N, which is the count of numbers in the input
The second line contains N comma-separated whole numbers A1, A2..., AN

## Constraints
1 <= N <= 100
0 <= Ai <= 100000

## Output Format
The first line of output contains the solution.

## Sample Input 0
4
1 15 6 3

## Sample Output 0
9

## Explanation 0
Sum of numbers: 1 + 15 + 6 + 3 = 25
Sum of digits: 1 + 1 + 5 + 6 + 3 = 16
Difference: |25 - 16| = 9

## Sample Input 1
4
1 2 3 4

## Sample Output 1
0

## Explanation 1
Sum of elements: 1 + 2 + 3 + 4 = 10
Sum of digits: 1 + 2 + 3 + 4 = 10
Difference: |10 - 10| = 0
