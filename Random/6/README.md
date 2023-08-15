## Question 5

Skipping aside the long stories which usually do no good, let's get straight to the point. You are given a single 
positive integer n, and you have to return/print a series of n + 1 positive integers such that : - Exactly one number 
should appear twice, all the remaining values should appear only once. - The sum of this series should equal 2^n
You also have to print this series in ascending order.

Input Format
-The first line of the input contains a single integer T denoting the number of test cases. The description of 
T test cases follows.
-The first and only line of each test case contains a single integer N.

Constraints
-1≤T≤60
-1≤N≤60

Output Format
-For each test case, print a single line containing N + 1 positive integers in non-decreasing order that satisfy 
 the given conditions.
-To handle the scenario of multiple outputs the solution is defined such that the it is the set containing mininum 
 sum of n values.

Sample Input 0
3
4
5
6

Sample Output 0
1 2 3 3 7
1 2 3 4 4 18
1 2 3 4 5 5 44
