#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    int d= (a+b)/2;
	    int e=(b+c)/2;
	    int f=(a+c)/2;
	    if(d>=35 && e>=35 && f>=35)
	     cout<<"PASS\n";
	    else
	     cout<<"FAIL\n";
	}
	return 0;
}
