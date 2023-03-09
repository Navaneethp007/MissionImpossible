#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,c=0;
        cin>>n;
        while(n%2==0)
        {
            c++;
            n=n/2;
        }
        if(c%2==0)
            cout<<1<<"\n";
        else
            cout<<0<<"\n";
    }
    return 0;
}
