#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	long long int t;
	cin>>t;
	while(t--)
	{
	    long long int n,a,b,c,d,e,f;
	    cin>>n>>a>>b>>c>>d>>e>>f;
	    long double x=(long double) n/2;
	    long double s=a+b+c+d+e+f;
	    cout<<fixed<<setprecision(0)<<s*ceil(x)<<"\n";
	}
	return 0;
}
