#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	long long int t;
	cin>>t;
	while(t--)
	{
	    int z,p,x,y;
	    cin>>p>>x>>y>>z;
	    double a=(double)p,b=(double)x,c=(double)y;
	    if(z==1)
	    {
	        c=(c/100)*a;
	        a=a+c;
	    }
	    else
	    {
	       b=(b/100)*a;
	       a=a-b;
	    }
	    cout<<fixed<<setprecision(2)<<a<<"\n";
	}
	return 0;
}
