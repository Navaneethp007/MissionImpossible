#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,f=0;
        cin>>n;
        long long int a[n];
        a[0]=4;
        a[1]=7;
        for(int i=2; i<n; i++)
        {
            if (i%2 != 0)
            a[i] = a[i/2]*10 + 4;
         else
            a[i] = a[(i/2)-1]*10 + 7;
        }
        for(int i=0; i<n; i++)
        {
            if(n%a[i]==0)
            {
                f=1;
                break;
            }

        }
        if(f!=1)
        {
            cout<<"LOCK"<<"\n";
        }
        else
        {
            cout<<"UNLOCK"<<"\n";
        }
        
    }
    return 0;
}
