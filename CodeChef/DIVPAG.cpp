#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int> a(n);
	    for(int i=0;i<n;i++)
	     cin>>a[i];
	    int s=std::accumulate(a.begin(),a.end(),0);
	    if(n>1 && s%2==0)
	      cout<<"YES\n";
	     else
	      cout<<"NO\n";
	}
	return 0;
}
