#include <stdio.h>
#include <math.h>

int main() {
  int b,k,c=0,d,e;
  printf("enter value of b \n");
  scanf("%i",&b);
  d=b;
  e=log10(b)+1;
  while(b!=0)
  {
    k=b%10;
    c=c+pow(k,e);
    b=b/10;
  }
  if(c==d)
  {
    printf("%i is an armstrong number \n",d);
  }
  else
  {
    printf("%i is not an armstrong number \n",d);
  }
  return 0;
}
