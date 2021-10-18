#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
       int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a==b && b==c && c==d && a==d && a==c && b==d)
        {
           cout<<0<<"\n";
        }
        else if((a!=b && b==c && c==d) || (a!=b && a==c && c==d) || (b!=c && a==c && c==d ) || (b!=c && a==b && b==d) || (c!=d && a==b && b==c) || (c!=d && a==b && b==d) || (a!=d && b==c && c==d) || (a!=d && a==b && b==c) || (d!=b && a==c && c==d ) || (d!=b && a==b && b==c))
        {
           cout<<1<<"\n";       
        }
        else if((a!=b && b!=c && c!=d && a!=c && a!=d && b!=d) || (c==d) || (a==d) || (a==b) || (b==d) || (c==b) || (a==c))
        {
            cout<<2<<"\n";
        }
    }
	return 0;
}
