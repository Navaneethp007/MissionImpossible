#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,d=0,p=-1;
        cin>>n>>k;
        int a[n];
        for(int i=0; i<n; i++)
        cin>>a[i];
        for(int i=0; i<n; i++)
        {
            if(a[i]<k)
            {
                p=i+1;
                break;
            }
            else
            {
                d=a[i]-k;
                a[i+1]+=d;
            }
        }
        if(p>=0)
        cout<<"NO"<<" "<<p<<"\n";
        else
        cout<<"YES"<<"\n";
    }
	return 0;
}
