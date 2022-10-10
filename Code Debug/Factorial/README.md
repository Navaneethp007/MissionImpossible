## Question 2

#include <iostream.h>  
  
using namespace std;  
  
int main()  
{  
  
  int i,fact=0,number;    
  
  printf("Enter any Number: ");    
 
  scanf(number);    
  
  for(i=2;i<number;++i){    
      
      fact=fact-i;    
  
   }    
  
  cout<<fact<<endl;   
  
  return 0;  

 }

Input Format
- 5

Constraints
- 1<=n<1000

Output Format
- 120

Sample Input 0
- 5
            
Sample Output 0
- 120
