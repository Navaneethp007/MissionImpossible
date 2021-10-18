#include <iostream>
using namespace std;

int main() {
    int l,b,a,p;
    cin>>l>>b;
    p=2*(l+b);
    a=l*b;
    if(a>p)
    {
        cout<<"Area"<<"\n";
        cout<<a<<"\n";
    }
    else if(a==p)
    {
        cout<<"Eq"<<"\n";
        cout<<a<<"\n";
    }
    else
    {
        cout<<"Peri"<<"\n";
        cout<<p<<"\n";
    }
	return 0;
}
