#include <iostream>
using namespace std;

int main() {
    int t,n;
    cin>>t;
    while(t-->0)
    {
        cin>>n;
        int a[n],b[n],c[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        for(int i=0;i<n;i++)
        {
            c[i]=a[i]*20-b[i]*10;
        }
         int m=c[0];
         for(int i=0;i<n;i++)
         {
            if(c[i]>m)
            {
                m=c[i];
            }
        }
        if(m>0)
         {
             cout<<m<<"\n";
         }
         else
         {
             cout<<0<<"\n";
         }
    }
	return 0;
}
