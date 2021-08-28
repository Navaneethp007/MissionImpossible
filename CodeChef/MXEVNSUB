#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,s=0,c=0,d=0;
	    cin>>n;
	    for(int i=1; i<=n; i++)
	    {
	        s=s+i;
	        c++;
	    }
	    for(int i=n; i>0; i--)
	    {
	        if(s&2!=0)
	        {
	            s=s-i;
	            d++;
	        }
	        else
	        {
	            break;
	        }
	    }
	    cout<<c-d<<"\n";
	}
	return 0;
}
