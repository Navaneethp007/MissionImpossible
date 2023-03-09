#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long int h,w,x,y,k,a,b,c,d;
	    cin>>h>>w>>x>>y>>k;
	    a=h-y;
	    b=w-x;
	    c=pow(a,2)+pow(b,2);
	    d=sqrt(c);
	    if(d<k)
	     cout<<1<<"\n";
	    else
	     cout<<0<<"\n";
	}
	return 0;
}
