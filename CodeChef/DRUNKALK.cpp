#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int k,c=0;
	    cin>>k;
	    for(int i=1; i<=k; i++)
	    {
	        if(i%2!=0)
	        c=c+3;
	        else
	        c=c-1;
	    }
	    cout<<c<<"\n";
	}
	return 0;
}
