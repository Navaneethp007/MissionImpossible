#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        int a,b,c=0;
        a=s1.length();
        b=s2.length();
        for(int i=0; i<=(a-b); i++)
        {
            int j;
            for(j=0; j<b; j++)
            {
                if(s1[i+j]!=s2[j])
                {
                    break;
                }
            }
          if(j==b)
          {
              c++;
              j=0;
          }
        }
        cout<<c<<"\n";
    }
    return 0;
}
