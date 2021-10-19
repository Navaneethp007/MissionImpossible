#include <stdio.h>
#include <math.h>

main() {
  char t[20];
  int i=0,j,l=0,f;
  printf("Enter text \n");
  gets(t);
  while(t[i]!='\0')
  {
    l++;
    i++;
  }
  j=l-1;
  for(i=0;i<l/2;i++)
  {
    if(j>l/2)
    {  
      if(t[i]==t[j])
      {
        f=1;
      }
      else
      {
        f=0;
        break;
      }
      j--;
    }  
  }
  if(f!=0)
  {
    printf("%s is a palindrome\n",t);
  }
  else
  {
    printf("%s is not a palindrome\n",t);
  }
}

