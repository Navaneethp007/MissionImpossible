#include <stdio.h>
#include <math.h>

main() {
  int n,t;
printf("Enter number of elements to sort \n");
scanf("%i",&n);
int a[n];
printf("Enter the elements \n");
for(int i=0;i<n;i++)
{
  scanf("%i",&a[i]);
} 
printf("elments of the array \n");
for(int i=0;i<n;i++)
{
  printf("%i \t",a[i]);
}    
for(int i=0;i<n-1;i++)
{
   for(int j=0;j<n-i-1;j++)
   {
      if(a[j]>a[j+1])
       {
         t=a[j];
         a[j]=a[j+1];
         a[j+1]=t;
       }
    }
}
printf("\n After Bubble sort\n");
for(int i=0;i<n;i++)
{
  printf("%i \t",a[i]);
}

}
