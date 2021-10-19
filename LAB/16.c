#include<stdio.h>
long factorial(int n)
{
  if (n == 0)
    return 1;
  else
    return(n * factorial(n-1));
}

int main()
{
  int n;
  long f=1;
  printf("Enter a number: ");
  scanf("%d", &n);
  int t=n;
  while(t!=0)
  {
     f=f*t;
     t--;
  }
  printf("Factorial of %d using recursive function is %ld\n", n, f);
  f = factorial(n);
  printf("Factorial of %d using non recursive function is %ld\n", n, f);
  return 0;
}
