#include <iostream>
using namespace std;

int main() {
	long long int a,b,c;
	cin>>a>>b>>c;
	long long int s=a+b+c;
	 if(s==180 &&a!=0 && b!=0 && c!=0)
	  cout<<"YES";
	 else
	  cout<<"NO";
	return 0;
}
