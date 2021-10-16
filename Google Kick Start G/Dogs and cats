# include <iostream>
# include <bits/stdc++.h>
using namespace std;

int main(){
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,d,c,m,e=0,f=0,k=0,b=0,a=0;
        cin>>n>>d>>c>>m;
        string s;
        cin>>s;
        for(long long int i=0; i<n; i++)
        {
            if(s[i]=='D')
            f=f+1;
        }
        for(long long int i=0; i<n; i++)
        {
            if(s[i]=='D')
            {
                if(s[i-1]=='C')
                {
                    k=i;
                    for(long long int j=0; j<k; j++)
                    {
                        if(s[j]=='C')
                        {
                            e=e+1;
                        }
                    }
                    if(e<=c)
                    b=1;
                }
                c=c+m;
            }
            else
            a=a+1;
        }
        if(d>=f && (b==1 || a==n))
        cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";
    }
}
