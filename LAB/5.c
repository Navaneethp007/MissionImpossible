#include <stdio.h>
#include <math.h>

int main() {
  int n;
  float s=0,b;
  printf("the value of n is \n");
  scanf("%i",&n);
  int a[n];
  printf("enter %i elements \n",n);
  for(int i=0; i<n; i++)
  {
    scanf("%i",&a[i]);
    s=s+a[i];
  }
  b=s/n;
  printf("%f is the sum \n",s);
  printf("%f is the average \n",b);
  return 0;
}
