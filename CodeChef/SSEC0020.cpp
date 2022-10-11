#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long n;
	cin>>n;
	long long i=1,c=0,d=0;
	long long t=n;
	while (t) { 
        t = t / 10; 
        ++d; 
    }
	while(n)
	{
	    if(n%i==0)
	        c++;
	    n=n/10;
	    i++;
	}
    if(c==d)
        cout<<"Yes";
    else
        cout<<"No";
	return 0;
}

