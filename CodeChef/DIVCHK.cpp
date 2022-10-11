#include <iostream>
using namespace std;

int main() 
{
	int t,a,b;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>a>>b;
	    if(b==0)
	        cout<<"crash"<<endl;
	    else
	    {
	        if(a%b==0)
	            cout<<"safe"<<endl;
	        else
	            cout<<"crash"<<endl;
	    }
	}
	
	
	            
	return 0;
}

