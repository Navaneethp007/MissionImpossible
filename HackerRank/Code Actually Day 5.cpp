#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t,n;
    cin>>t;
        while(t-- >0)
        {
            cin>>n;
            int a[n],k,c=0;
            for(int i=0; i<n; i++)
            {
                cin>>a[i];
            }
            cin>>k;
            for(int i=0; i<n; i++)
            {
                if(k==a[i])
                {
                    c++;
                }
            }
            cout<<c<<"\n";
        }
    return 0;
}
