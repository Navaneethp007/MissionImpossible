#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t,n;
    cin>>t;
    while(t-- >0)
    {
        cin>>n;
         for (int i=1; i<=n; i++) 
         {
           for (int j=0; j<i-1; j++) 
           {
              cout <<i+j<<" ";
           }
           for(int j=i-1; j>=0; j--)
           {
               cout<<i+j<<" ";
           }
           cout <<"\n";
         }
    }
    return 0;
}
