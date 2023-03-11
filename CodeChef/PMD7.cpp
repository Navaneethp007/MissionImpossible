#include <bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int x,m,k=0,r=0;
        cin>>x>>m;
        int p=m%4;
        if(p==0 && m!=0)
         p=4;
        while(x>0)
        {
           k=x%10;
           r=r*10+(int)pow(k,p)%10;
           x=x/10;
        }
        if(r%7==0)
         cout<<"YES\n";
        else
         cout<<"NO\n";
    }
return 0;
}
