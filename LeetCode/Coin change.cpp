class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        vector<int> a(amount+1,amount+1);
        a[0]=0;
        for(int i=1;i<amount+1;i++)
        {
            for(int j=0;j<coins.size();j++)
            {
                if(i-coins[j]>=0)
                 a[i]=min(a[i],1+a[i-coins[j]]);
            }
        }
        if(a[amount]!=amount +1)
         return a[amount];
        else
         return -1;

    }
};
