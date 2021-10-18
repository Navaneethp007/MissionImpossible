#include <iostream>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t-- >0)
	{
	    cin>>n;
	    int c=0,k;
	    while(n!=0)
	    {
	        k=n%10;
	        if(k==4)
	        {
	            c++;
	        }
	        n=n/10;
	    }
	    cout<<c<<"\n";
	}
	return 0;
}
