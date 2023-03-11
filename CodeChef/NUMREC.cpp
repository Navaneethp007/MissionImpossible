#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long int m,n,s=0;
	    cin>>n>>m;
	    s=(n*(n+1)/2)*(m*(m+1)/2)-n*m;
	    cout<<s<<"\n";
	    
	}
	return 0;
}
