## Question 5

Groot has the ability to grow trees from his body . But he is not smart enough to solve tree data structure problems .Help him solve the following problem 
so that he can become the Guardian of Competitive Coding. You are given a directed rooted tree with N vertices. Each node in the tree has some weight associated 
with it, which is given in an array A, where A[i] denotes the weight of the ith node. If you are standing at node A, you earn points equal to the sum of weights
of all the descendants of A. So, if you are at a leaf node, you will earn 0 points as leaf nodes have no children.

In the tree shown above, the value inside the nodes represents the node number, and the outer value represents the weight of the node.
In the above tree, you will earn the following points if you are standing at these nodes :
- Node 1 : 8 (from node 10) + 1 (from node 6) + 4 (from node 8) = 13 points
- Node 9 : 10 (from node 4) + 9 (from node 5) = 19 points
- Node 6 : 0 points
- Node 2 : You get all weights except the weight of Node 2 itself. Sum of all weights - weight of root = 55 - 3 = 52 points

You can move around the tree by traversing its nodes, but there are some conditions.
- If you are at a node A, you can only go to its parent node (let’s say B), and the cost of this one move will be 1.
- To make it more clear, the traversal from node 4 to node 2 in the above tree has been explained below :
- Node 4 -> Node 9, Cost = 1 : From node 4, we can only go to its parent node 9.
- Node 9 -> Node 2, Cost = 1 : From node 9, we can only go to its parent node 2.

So, the total cost of traversal will be 2. After you reach and stop at Node 2, you get 52 points.Note that you can’t go anywhere from Node 2, as it has no parents.
 
You will be given some queries, and in each query you have to answer the following :
 Given a single integer X : You want to earn at least X points by going to some node in the tree. But, you can only start from a leaf node, and you also want 
 to minimize the cost of traversal. Find out the minimum cost of earning at least X points. (Note that you may start from any leaf node, and go to any node. 
 The only condition is to minimize the cost of traversal and earn at least X points after reaching the destination node.)
 
For more clarity, suppose you are given a query for the above tree:
 X = 13, You may choose to go from leaf node 5 -> 4 -> 9 giving you 9 (from node 5) + 10 (from node 4) = 19 points, which is greater than X. This traversal 
 has cost 2. You can also go from leaf node 10 -> 1, giving you 8 + 4 + 1 = 13 points, which is >= X. This traversal has a cost of just 1. Both the traversals 
 are valid, but the 2nd one is more optimal as it gives minimum cost. Thus, the optimal cost is 1.

Input Format :
- First line contains a single integer T, the number of test cases.
- Second line contains a single integer N, the number of vertices.
- Third line contains a single integer R, the root of the tree.
- Each of the next n - 1 lines contain 2 space separated integers : U and V, indicating that there is an edge from node U to node V (node U is the parent of node V).
- Next line contains N space separated integers : A1, A2, A3… AN, Ai denotes weight of the ith node.
- Next line contains Q, the number of queries.
- Each of the next Q lines contain a single integer X : The minimum number of points you want to earn.

Output Format :
- For each query in a test case, you need to output a single integer Y, the minimum cost to earn X points. Print -1, if it is impossible to earn at least X points by   going to any node in the tree.

Constraints :
- 1 <= T <= 10
- 1 <= N <= 10^5
- 1 <= R <= N
- 1 <= A[i] <= 10^9 for 1 <= i <= N
- 1 <= Q <= N
- 1 <= X <= 10^15 for all queries

Sample Input 1 :
 - 1
 - 10
 - 2
 - 2 1
 - 2 9 
 - 2 3
 - 1 10
 - 1 6
 - 1 8
 - 9 4
 - 3 7
 - 4 5
 - 2 3 6 10 9 1 5 4 7 8
 - 3
 - 13
 - 0
 - 19

Sample Output 1 :
 - 1
 - 0
 - 2
