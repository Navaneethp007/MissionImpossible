#include <iostream>
using namespace std;

int main() {
	int t,c,g;
	cin>>t;
	while(t-- >0)
	{
	    cin>>g>>c;
	    int d;
	    d=(c*c)/(2*g);
	    cout<<d<<"\n";
	}
	return 0;
}
