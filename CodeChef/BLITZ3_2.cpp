#include <iostream>
using namespace std;

int main() {
	int t,n,a,b;
	cin>>t;
	while(t-- >0)
	{
	    cin>>n>>a>>b;
	    int c,d;
	    c=2*(180+n);
	    d=a+b;
	    cout<<c-d<<"\n";
	}
	return 0;
}
