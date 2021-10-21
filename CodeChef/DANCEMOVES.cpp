#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,c=0;
        cin>>x>>y;
        while(x!=y)
        {
           if(x<y)
           {
               x=x+2;
           }
           else if(y<x)
           {
               x=x-1;
           }
           c=c+1;
        }
        cout<<c<<"\n";
    }
	return 0;
}
