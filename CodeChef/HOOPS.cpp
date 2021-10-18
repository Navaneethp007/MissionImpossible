#include <iostream>
using namespace std;

int main() {
	int N,T;
	cin>>T;
	if(1<=T<=10^5)
	{
	while(T-- >0)
	{
	    cin>>N;
	    cout<<(N/2)+1<<"\n";
	}
	}
	return 0;
}
