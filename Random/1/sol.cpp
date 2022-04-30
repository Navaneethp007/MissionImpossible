#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin>>t;
    while(t--)
    {
        string s,r;
        cin>>s;
        for(int i=0;i<s.length();i++)
            r[i]=s[i];
        for(int i=0; i<s.length();i++)
            r[s.length()+i]=s[i];
        int maxh=0;
        for(int i=1; i<s.length();i++)
        {
            int curr=0;
            for(int j=i,k=0;j<(i+s.length());j++,k++)
            {
                if(r[j]!=s[k])
                    curr++;
            }
            if(curr==s.length())
                curr=s.length();
            maxh=max(maxh,curr);
        }
        cout<<maxh<<"\n";
    }
}
