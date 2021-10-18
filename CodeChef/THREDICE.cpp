#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,c;
        float d;
        cin>>x>>y;
        c=6-(x+y);
        d=c/6.0;
        if(c<0)
        {
            cout<<0.000000<<"\n";
        }
        cout << fixed << setprecision(6)<<d<<"\n";
    }
    return 0;
}
