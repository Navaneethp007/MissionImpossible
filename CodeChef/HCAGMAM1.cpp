#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long int x,y,c=0,d=0,m=0;
        string s;
        cin>>x>>y;
        cin>>s;
        for(int i=0; i<30; i++)
        {
            if(s[i]=='1')
            {
              d=d+x;
              c=c+1;
            }
            else
            {
                m= max(c,m);
                c=0;
            }
        }
        m=max(c,m);
        cout<<d+(m*y)<<"\n";
    }
	return 0;
}
