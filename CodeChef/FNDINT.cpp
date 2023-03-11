#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long int x,r,j;
	    cin>>x;
	    for(int i=x+1;;i++)
	    {
	        int flag=1;
	        j=i;
	        int a[10]={0};
	        while(j>0)
	        {
	            r=j%10;
	            a[r]++;
	            if(a[r]>1)
	            {
	                flag=0;
	                break;
	            }
	            j/=10;
	        }
	       if(flag==1){
	        cout<<i<<"\n";
	        break;
	       }
	    }
	}
	return 0;
}
