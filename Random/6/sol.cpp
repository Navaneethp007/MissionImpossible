#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,s=0;
        cin>>n;
        int a[n+1];
        for(int i=0;i<n+1;i++)
            a[i]=i+1;
        for(int i=0;i<n+1;i++)
        {
            if(i==n-1 && i!=0)
                a[i]=a[n-2];
            else if(i==n && i!=0)
               a[i]=pow(2,n)-s; 
            s+=a[i];
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
