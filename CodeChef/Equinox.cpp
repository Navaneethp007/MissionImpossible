#include <iostream>
using namespace std;

int main() {
	string s;
	int t,n,a,b;
	cin>>t;
	while(t-- >0)
	{
	    cin>>n>>a>>b;
	    long int c=0,d=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>s;
	        if(s[0]=='E' || s[0]=='Q' || s[0]== 'U' || s[0]=='I' || s[0]=='N' || s[0]=='O' || s[0]=='X')
	        {
	           c=a+c;
	        }    
	        else
	        {
	           d=b+d;
            }
	    }      
	    if(c>d)
	    {
	        cout<<"SARTHAK"<<"\n";
	    }
	    else if(c==d)
	    {
	        cout<<"DRAW"<<"\n";
	    }
	    else
	    {
	        cout<<"ANURADHA"<<"\n";
	    }
	}
	return 0;
}
