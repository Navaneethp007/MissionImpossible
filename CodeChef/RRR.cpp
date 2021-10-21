#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    long long int c=((2*n)-(k+1))/2;
	    cout<<2*c<<"\n";
	}
	return 0;
}
