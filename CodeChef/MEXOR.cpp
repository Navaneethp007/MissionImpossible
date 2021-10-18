#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int x,a=1;
        cin>>x;
        if(x==0)
        cout<<1<<"\n";
        else if(x==1 || x==2)
        cout<<2<<"\n";
        else
        {
            while(a*2<=x)
            a=a*2;
            if(x==((a*2)-1))
            cout<<x+1<<"\n";
            else
            cout<<a<<"\n";
        }
    }
	return 0;
}
