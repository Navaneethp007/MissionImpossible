#include <iostream>
using namespace std;

int main() {
	int n=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    int d=0,c=0;
	    cin>>d>>c;
	    if(d<=c||c>d/2)
	    cout<<"1"<<endl;
	    else
	    cout<<"0"<<endl;
	}
	return 0;
}
