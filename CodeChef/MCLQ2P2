#include <iostream>
using namespace std;

int main() {
	int T,s[3],e[3];
	cin>>T;
	if(1<=T<=10^6)
	{
	while(T-- >0)
	{
	    int c=0;
	    for(int i=0;i<3; i++)
	    {
	        cin>>s[i]>>e[i];
	    }
	    
	    if(s[0]<=e[1] && s[1]<=e[0])
	    {
	        if(s[1]<=e[2] && s[2]<=e[1])
	        {
	                if(s[0]<=e[2] && s[2]<=e[0])
	                {
	                   cout<<"WIN"<<"\n";
	                   c=1;
	                }    
	        }
	    }
	    if(c==0)
	    {
	        cout<<"LOSE"<<"\n";
	    }
	    
	       
	}
	}
	return 0;
}
