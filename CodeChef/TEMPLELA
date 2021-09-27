#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,f=0,s1=0,s2=0;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n/2; i++)
        {
            s1=s1+a[i];
        }
        for(int j=n-1; j>n/2; j--)
        {
            s2=s2+a[j];
        }
        int j=n-1;
         for (int i=0; i<n / 2 ; i++)
         {
             if (a[i]!= a[n-i- 1] || a[0]!=1 || s1!=s2 || a[i+1]-a[i]!=1) 
             {
                 f = 1;
                 break;
             }
          }
        
        if(f==0)
        cout<<"yes"<<"\n";
        else
        cout<<"no"<<"\n";
    }
	return 0;
}
