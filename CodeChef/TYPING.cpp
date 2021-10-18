#include <iostream>
#include <bits/stdc++.h>
using namespace std;
map<string, int>c;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        map<string, int>c;
        int n,d=0;
        string s;
        cin>>n;
        while(n--)
        {
            cin>>s;
            if(c.count(s))
            {
                d=d+c[s]/2;
            }
            else
            {
                int a[256]{0},e=0;
                a['f']= 1;
                a['d']= 1;
                a['j']= 2;
                a['k']= 2;
                for(int i=0; i<s.length(); i++)
                {
                    if(i==0)
                    {
                        e=e+2;
                    }
                    else if(a[s[i]]==a[s[i-1]])
                    {
                        e=e+4;
                    }
                    else
                    {
                        e=e+2;
                    }
                }
                c[s]=e;
                d=d+e;
            }
        }
        cout<<d<<"\n";
    }
	return 0;
}
