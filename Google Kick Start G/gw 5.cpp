 #include <bits/stdc++.h>
 using namespace std;

 int solve(string s){
  int ans=s[0]-'a';
  for(int i=0; i<s.size(); i++)
  {
     if(s[i]=='a')
     ans=ans+(ans | (s[i]-'a'));
     else if(s[i]=='b')
     ans=ans+(ans ^(s[i]-'a'));
     else 
     ans=ans+(ans & (s[i]-'a'));
  }
  return ans;
 }
 int main()
 {
   string s="bcaacbccaabc";
   int ans=solve(s);
   cout<<ans<<"\n";
   return 0;
 }
