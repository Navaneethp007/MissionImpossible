#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	     cin>>a[i];
	    int s=sizeof(a)/sizeof(a[0]);
	    sort(a,a+s);
	    cout<<a[1]<<"\n";
	}
	return 0;
}
