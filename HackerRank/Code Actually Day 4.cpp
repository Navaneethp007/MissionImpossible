#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t,s,e;
    cin>>t;
    while(t-- >0)
    {
        cin>>s>>e;
        int c=0;
        for(int i=s; i<=e; i++)
        {
            c=c+i;
        }
        cout<<c<<"\n";
    }
    return 0;
}
