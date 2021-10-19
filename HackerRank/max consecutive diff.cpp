#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  int n;
  cin>>n;
  int a[n],c[n];
  for(int i=0; i<n; i++) 
    cin>>a[i];
  sort(a,a+n);
  for(int i=0; i<n; i++)
  {
     if(i==n-1)
       break;
     else{
      c[i]=abs(a[i]-a[i+1]);
     }
  }
  int j=n-2,l=0;
  while(j>=0)
  {
    l++;
    j--;
  }
   sort(c,c+l);
    int m=c[0];
  for(int i=1; i<l; i++)
  {
     if(c[i]>m)
       m=c[i];
  }
   cout<<m;
    return 0;
}
