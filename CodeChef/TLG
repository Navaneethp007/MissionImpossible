#include <iostream>
using namespace std;

int main() {
    int t,f=0,m=0;
    cin>>t;
    int c=0,d=0;
    while(t-- >0)
    {
        int a,b;
        cin>>a>>b;
        c=c+a;
        d=d+b;
        int l=0;
        if(c>d)
        {
            l=l+(c-d);
            if(l>m)
            {
                m=l;
                f=1;
            }
        }
        else 
        {
            l=l+(d-c);
             if(l>m)
             {
                m=l;
                f=2;
             }
        }
    }
    
    cout<<f<<" "<<m<<"\n";

	return 0;
}
