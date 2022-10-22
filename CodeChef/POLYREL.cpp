#include <iostream>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,s=0;
        cin>>n;
        int *x=new int[n];
        int *y=new int[n];
        for(int j=0;j<n;j++)
            cin>>x[j]>>y[j];
        while(n>2)
        {
            s+=n;
            n=n/2;
            
        }
        cout<<s<<"\n";
    }
    return 0;
}
