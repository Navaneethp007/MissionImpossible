## Question 4

Gamora , the adoptive daughter of Thanos is used as messenger to Ronan by Thanos. Message consists of a string ‘s’ that consists of english alphabets . But Gamora hates Thanos as he killed her parents . So in discontentment with Thanos' actions , she decides to change the content of Thanos’s message and remove the important pattern in the message . But she has do it in minimum moves otherwise Thanos will catch her red-handed .
So she devises a plan . In a single move , Gamora can swap two adjacent letters in the message string ‘s’.
She wants to make sure that string does not contain the substring ‘t’ which is of length 2 .It is known that the two characters of substring ‘t’ are not equal . Doing this will change the pattern in the message .
You need to help Gamora find the minimum number of moves she will require to change the important pattern in the message .

Input Format :
 First line contains integer ‘N’ - the length of string ‘s’ in message.
 Second line contains string ‘s’ , consisting of english lowercase alphabets. 
 Third line contains substring ‘t’ , of length 2 which should not be present in the final string message

Output Format :
 You need to output a single integer , denoting the minimum number of moves Gamora needs to do so that substring ‘t’ is not present in string message ‘s’ . 

Constraints :
 1 <= N <= 75
 Length of substring ‘t’ = 2

Sample Input 1:
 4
 malik
 sa

Sample Output 1:
 0
 Explanation:
  Substring "sa" is not present in the string "malik".So 0 moves are performed.

Sample Input 2:
 5
 caaba
 ab

Sample Output 2:
 2
