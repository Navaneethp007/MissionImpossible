#include <iostream>
using namespace std;

int main() {
	int t,a,b,c,d;
	cin>>t;
	while(t-- >0)
	{
	    cin>>a>>b>>c>>d;
	    int e,f;
	    e=a+c;
	    f=b+d;
	    if(e==180 && f==180)
	    {
	        cout<<"YES"<<"\n";
	    }
	    else
	    {
	        cout<<"NO"<<"\n";
	    }
	}
	return 0;
}
