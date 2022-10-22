class Solution {
public:
    
    // Using DP ( MEmoization)
     int climb(int n , vector<int> &dp)
     {
        if(n==0 || n==1) 
        {
            return 1;
        }
        
        if(dp[n]!=-1) return dp[n];
            
       else return dp[n]=  climb(n-1,dp)+ climb(n-2,dp);
       
     }
    
    int climbStairs(int n) 
    {
        vector<int> dp(n+1,-1);
        return climb(n,dp);
        
    }
};