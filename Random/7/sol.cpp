#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s,k="";
    cin>>s;
    int l=s.length();
    if(l==1)
        cout<<s;
    else{ 
    for(int i=0;i<l;i++)
    {
        for(int j=i+1;j<l;j++)
        {
          int a=i;
          int b=j; 
          int c=1;
          while(a<=b)
            {
              if(s[a]!=s[b]){
                  c=0;
                  break;
              }
              else
              {
                  a++;
                  b--;
              }
            }
            if(c){
             string p=s.substr(i,j-i+1);
             if (p.length()>k.length())
                 k=p;
            }
        }
    }
    }
    cout<<k;
    return 0;
}
