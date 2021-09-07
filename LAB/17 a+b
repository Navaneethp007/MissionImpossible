#include <stdio.h>
void swapsum(int *a,int *b)
{
int t,s=0;
s=*a+*b;
printf("\nSum is %d\n",s);
t=*a;
*a=*b;
*b=t;
printf("\nafter swapping a=%d b=%d",*a,*b);
}

int main()
{
int a,b; 
printf("Enter 2 numbers: ");
scanf("%d%d",&a,&b);
printf("\nbefore swapping a=%d b=%d",a,b);
swapsum(&a,&b);
return 0;
}
