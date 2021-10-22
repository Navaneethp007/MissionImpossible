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

// another solution
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	  long long int n,k;
	  cin>>n>>k;
      long long int a[n];
      long long int c=(n-1)*2;
      a[0]=c;
	  for(int i=1; i<n; i+=2)
      {
        a[i]=c-2;
        a[i+1]=a[i];
        c=a[i];
      }
      for(int i=0; i<n; i++)
      {
        if(i==k-1)
        cout<<a[i]<<"\n";
      }
	}
	return 0;
}
