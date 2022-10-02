#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    int c;
	    if(a>=b)
	     c=a;
	    else
	     c=b;
	    cout<<7-c<<"\n";
	}
	return 0;
}
