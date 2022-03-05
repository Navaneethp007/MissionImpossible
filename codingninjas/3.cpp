// Ronan fears Thanos. But one thing he fears more than Thanos is a bunch of arrays .
// Star-Lord wants to take advantage of this weakness and decides to confuse Ronan with a problem. Help Ronan defeat the Guardians of Galaxy by solving this problem for him.
// Star-Lord give Ronan arrays A , B , C , D each of size N with the following properties as mentioned.
// Array A only contains integer 1 and 2 (i.e. A[i] ∊ { 1 , 2 } for all i , 1 <= i <= N ) .
// Now you can do the following transformation on elements of array A .
// One transformation is defined as follows :
// Choose any index (i) of array A and an integer (r) where 0 <= r <= A[i] .
// Now make the following changes to A[i] ,
// If A[i] is even :- A[i] = A[i] + 1 + (A[i] & r)
// If A[i] is odd :- A[i] = A[i] + (A[i] & r)
// Where ‘&’ is the binary AND operation .
// You are required to transform A[i] to B[i] and store the minimum number of transformations required for that in C[i] . Do these operations for all i , 1 <= i <= N and store in the respective index in C .
// Given Array D is associated with Array C (i.e. D[i] is associated with C[i] ) . You need to choose elements from array C in such a way that you can maximize the sum of elements chosen . But the cost of choosing element C[i] is D[i] . You also need to make sure that total cost of choosing elements from C[i] does not exceed X .
// Return the sum of elements chosen from array C .
// Input Format :
// First line contains the two integers ‘N’ and ‘X’ .

// Second line contains array ‘A’ of ‘N’ space separated integers.

// Third line contains array ‘B’ of ‘N’ space separated integers.

// Fourth line contains array ‘D’ of ‘N’ space separated integers.
// Output Format :
// You need to output a single integer , denoting the sum of elements chosen from array C .

// Sample Input 1:
// 5 15
// 1 2 2 1 1
// 3 6 4 7 11
// 2 7 1 5 4
// Sample Output 1 :
// 12
// Explanation :
// C[i] formed from this input will be : [2 , 2 , 2 ,4 ,4 ] (Assuming the first element shown in array is C[1] , i.e. 1 -index based)  . So one of the optimal way to choose from here is to choose the sum of C[5] , C[4] , C[3] and C[1] . This will be equal to 12
