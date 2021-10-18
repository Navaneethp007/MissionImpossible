#include <iostream>
using namespace std;

int main() {
	int x,p,n,r,c,d;
	cin>>x>>p>>n;
	c=x*12;
	d=(c*p*n)/100;
	r=d+c*n;
	cout<<r;
	return 0;
}
