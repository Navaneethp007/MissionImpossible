//find longest alternating substring in binary
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int c=0,d=0,n;
	    string s;
	    cin>>n>>s;
	    for(int i=0; i<n;i++)
	    {
	        if(s[i]=='0')
	         c++;
	        else
	         d++;
	    }
	    if(c==d)
	     cout<<c+d<<"\n";
	    else
	    {
	        int m=min(c,d);
	        cout<<(2*m)+1<<"\n";
	    }
	}// your code goes here
	return 0;
}
