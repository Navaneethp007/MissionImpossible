#include <iostream>
using namespace std;

int main() {
	int t,d,x,y,z;
	cin>>t;
	while(t-- >0)
	{
	    cin>>d>>x>>y>>z;
	    int c=7*x;
	    int e=y*d+z*(7-d);
	    if(c>e)
	    {
	        cout<<c<<"\n";
	    }
	    else 
	    {
	        cout<<e<<"\n";
	    }
	}
	return 0;
}
