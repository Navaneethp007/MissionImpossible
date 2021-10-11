#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,d,c=0,f=0,k=0;
        cin>>n>>d;
        int a=n;
        while(a!=0)
        {
            k=a%10;
            a=a/10;
            c++;
            if(d==k)
            {
                a=a*pow(10,c)+(k+1)*pow(10,c-1);
                f=a-n;
                c=0;
            }
        }
        cout<<f<<"\n";
    }
	return 0;
}
