#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,f=1;
        cin>>n;
        string s,t;
        cin>>s;
        for(int i=0; i<n; i++)
        {
            if(s[i]!='.')
            t+=s[i];
        }
        if(t.length()%2!=0)
        f=0;
        else
        {
          for(int i=0; i<t.length(); i++)
          {
              if(i%2==0)
              {
                  if(t[i]=='T')
                  f=0;
              }
              else
              {
                  if(t[i]=='H')
                  f=0;
              }
          }
        }
        if(f!=0)
        {
            cout<<"Valid"<<"\n";
        }
        else
        cout<<"Invalid"<<"\n";
    }
	return 0;
}
