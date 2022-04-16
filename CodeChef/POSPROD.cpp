#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--)
    {
        long long int n,m=0,r=0,p=0,a;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            if(a<0)
            {
                r+=m;
                m++;
            }
            else if(a>0)
            {
                r+=p;
                p++;
            }
        }
        cout<<r<<"\n";
    }
	return 0;
}
