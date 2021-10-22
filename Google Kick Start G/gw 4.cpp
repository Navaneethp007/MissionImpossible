
#include <bits/stdc++.h>
using namespace std;

int solve(int n){
 if(n<=0)
 {
   return 1;
 }
 if(n<=2)
 {
   return solve(n-1);
 }
 else if(n<=4)
 {
   return solve(n-2);
 }
 return solve(n-3)+solve(n-4)+solve(n-5);
}
int main()
{
  int n=10;
  int ans=solve(n);
  cout<<ans<<"\n";
  return 0;
}
