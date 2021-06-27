#include <iostream>
using namespace std;

int main() {
	int t;
	string s;
	cin>>t;
	while(t-- >0)
	{
	    cin>>s;
	    int l=s.length(),f;
	    if(s[0]=='<' && s[1]=='/' && s[l-1]=='>' && l>3)
	    {
	        for(int i=2; i<l-1;i++)
	        {
	            if(s[i]=='/'|| s[i]==' ' || (s[i]>=65 && s[i]<=90) )
	            {
	                f=0;
	                break;
	            }
	            else
	            {
	                f=1;
	            }
	        }
	    }
	    else
	    {
	        f=0;
	    }
	    if(f!=0)
	    {
	        cout<<"Success"<<"\n";
	    }
	    else
	    {
	        cout<<"Error"<<"\n";
	    }
	}
	return 0;
}
