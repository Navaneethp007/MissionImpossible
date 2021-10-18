#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x;
	    cin>>x;
	    if(x%4==0)
	    {
	        cout<<"North"<<"\n";
	    }
	    else if(x%4==1)
	    {
	        cout<<"East"<<"\n";
	    }
	    if(x%4==2)
	    {
	        cout<<"South"<<"\n";
	    }
	    if(x%4==3)
	    {
	        cout<<"West"<<"\n";
	    }
	}
	return 0;
}
