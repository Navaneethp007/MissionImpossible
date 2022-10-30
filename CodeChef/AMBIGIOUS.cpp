#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,a[100001],i;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)break;
        for(i=1;i<=n;i++)
             scanf("%d",&a[i]);
        for(i=1;i<=n;i++)
        {
            if(a[a[i]]!=i){printf("not ambiguous \n");break;}
            if(i==n)printf("ambiguous \n");
        }
    }
    return 0;
}
