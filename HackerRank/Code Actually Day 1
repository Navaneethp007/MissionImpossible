#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,t;
    cin>>t;
    while(t-- >0)
    {
        cin>>n;
        int a[n],sum=0,b,d=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
        b=sum/n;
        for(int i=0;i<n; i++)
        {
            if(a[i]<b)
            {
                d++;
            }
        }   
        cout<<d<<"\n";
        
    }
    return 0;
}
