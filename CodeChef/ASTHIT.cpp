#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n,j=0;
	    cin>>n;
	    long long int s[n],d[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>d[i];
	        cin>>s[i];
	    }
	    stack <int> b;
	    vector <int> a;
	    for(int i=0;i<n;i++)
	    {
	        if(d[i]==1)
	         b.push(i);
	        else
	        {
	            while(!b.empty() && s[b.top()]<s[i])
	            {
	                s[i]+=s[b.top()];
	                b.pop();
	            }
	            if(!b.empty())
	            {
	             if(s[b.top()]==s[i])
	              b.pop();
	             else
	              s[b.top()]+=s[i];
	            }
	            else
	                a.push_back(i);
	        }
	    }
	    while(!b.empty())
	    {
	        a.push_back(b.top());
	        b.pop();
	    }
	    sort(a.begin(),a.end());
	    cout<<a.size()<<"\n";
	    for(int i=0;i<a.size();i++){
	     cout<<a[i]+1<<" ";
	    }
	}
	return 0;
}
