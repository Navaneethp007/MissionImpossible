class Solution {
    
public:
    int minDistance(string s1, string s2) {
        
        int n = s1.size();
        int m = s2.size();
        
        vector<vector<int>> dp(n+1, vector<int> (m+1,-1));
        // dp[i][j] stores the minimum number of operations required to convert a string of length j to a string of length i, considering only the first j and i characters of s2 and s1 respectively 
        
        //base cases
        if(n==0) return m; //m deletions in total
        if(m==0) return n; //n insertions in total
        
        //from the 2 base cases above, we obtain:
        for(int i=0; i<=n; i++) dp[i][0] = i;
        for(int i=0; i<=m; i++) dp[0][i] = i;
        
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                
                if(s1[i-1]==s2[j-1]) dp[i][j] = dp[i-1][j-1];
                else{
                    int insert = dp[i][j-1];
                    int del = dp[i-1][j];
                    int replace = dp[i-1][j-1];
                    dp[i][j] = 1 + min(insert, min(del, replace));
                }
            }
        }
        
        return dp[n][m];
    }
};