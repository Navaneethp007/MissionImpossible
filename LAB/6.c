#include <stdio.h>
#include <math.h>

int main() {
  int n,e,p=-1;
  printf("enter the number of elements \n");
  scanf("%i",&n);
  int a[n];
  printf("enter the elements \n");
  for(int i=0; i<n; i++)
  {
    scanf("%i",&a[i]);

  }
  printf("enter the element to be searched \n");
  scanf("%i",&e);
  for(int i=0; i<n; i++)
  {
    if(e==a[i])
    {
      p=i;
      break;
    }
    
  }
  if(p!=-1)
  {
    printf("%i is found at %i \n",e,p);
  }
  else
  {
    printf("%i is not found \n",e);
  }
  return 0;
}
