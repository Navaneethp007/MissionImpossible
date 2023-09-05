# Question 9
Given whitespace separated strings x of length m and another string y of length n, check whether y is the acronym of x.
The string s is considered an acronym of words if it can be formed by concatenating the first character of each string in words 
in order. For example, "ab" can be formed from "apple" "banana" but cant be formed with "bear" "aardvark"
Print true if y is an acronym. Otherwise, print false.

## Input Format
- The first line contains the m and n, separated by a space (m is length of x, n is length of y).
- The second line contains the string x.
- The third line contains the string y.

## Constraints
- 1 <= m,n <= 1000
- x and y consists of lowercase english alphabets.

## Output Format
The first line consist of either true or false (case sensitive)

## Sample Input 0
- 17 3
- alice bob charlie
- abc
  
## Sample Output 0
true

## Explanation 0
The first letters of the words in x "alice", "bob" and "charlie" form the acronym "abc", which is same as y. Therefore they 
are equal and hence output is "true".

## Sample Input 1
- 8 1
- an apple
- a

## Sample Output 1
false

Explanation 1
The words in x, "an" and "apple" forms the acronym "aa", but the value of y is "a". They are not the same.Hence the output 
is "false".
