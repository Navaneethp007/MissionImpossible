#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n,x,s=0;
	    cin>>n>>x;
	    int a[n];
	    for(int i=0;i<n;i++)
	     cin>>a[i];
	    int i=0;
	    while(i<n)
	    {
	        if(a[i]==1)
	        {
	            s+=x;
	            if(a[i+1]==0){	             
	                s+=x;
	                i+=2;
	            }
	            else 
	             i+=1;
	        }
	        else
	        {
	            s+=0;
	            i+=1;
	        }
	    }
	    cout<<s<<"\n";
	}
	return 0;
}
