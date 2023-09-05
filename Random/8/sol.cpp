#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int s=0,n,m,k=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        s+=a[i];
        m=a[i];
        while(m>0)
        {
            k+=m%10;
            m=m/10;
        }
    }
    cout<<abs(s-k);
    return 0;
}
