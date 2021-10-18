#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k,c=0,b=0;
        cin>>n>>m>>k;
        int a[n];
        for(int i=0; i<n; i++)
        cin>>a[i];
        int f=a[0];
        if(f==1)
        {
        for(int i=1; i<n; i++)
        {
            if(f==a[i])
            {
              c=c+1;
            }
        }
        for(int i=0; i<m; i++)
        {
            if(a[i]==1)
            {
                b=b+1;
            }
        }
        }
        if((c+1)==n)
        cout<<"100"<<"\n";
        else if(b==m)
        cout<<k<<"\n";
        else
        cout<<0<<"\n";
       
    }

	return 0;
}
