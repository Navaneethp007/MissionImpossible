#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long int x,y;
        cin>>x>>y;
        long long int n=x*y;
        long long int d=2*x;
        long long int m=n*(n-1);
        cout<<d<<" "<<m<<"\n";
    }
	return 0;
}
