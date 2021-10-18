#include <iostream>
using namespace std;

int main() {
	long long int t,n;
	cin>>t;
	while(t-- >0)
	{
	    cin>>n;
	    int c=1;
	    for(int i=0; i<n; i++)
	    {
	        c=c*(n-i);
	    }
	    cout<<c<<"\n";
	}
	return 0;
}
