#include<bits/stdc++.h>
#define int long long
using namespace std;

bool a[100001];
int dp[100001][2];

void solve(){
   int n;string s;
   cin >> s;n=s.size();
   for(int i=1;i<n;++i)
      a[i]=s[i]!=s[i-1];
  
   dp[0][0]=1;
   for(int i=1;i<n;++i) {
      dp[i][0]=(dp[i-1][0]+dp[i-1][1])%998244353;
      if(a[i]==1) dp[i][1]=dp[i-1][0];
      else dp[i][1]=0;
   }
   cout << (dp[n-1][0]+dp[n-1][1])%998244353 << endl;
  
}

int32_t main() {
   int T;cin >> T;
   while(T--) solve();
}
