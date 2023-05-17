//TLE and also maybe the wrong answer also
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int p=-1,m=0,k=0;
        if(amount ==0)
         return 0;
        if(coins.size()==1 && amount%coins[0]!=0)
         return -1;
        if(coins.size()==1 &&amount%coins[0]==0)
         return amount/coins[0];
        sort(coins.begin(),coins.end());
        for(int i=0;i<coins.size();i++)
        {
            if(coins[i]<=amount)
             p=i;
        }
        if(amount%coins[p]==0)
         m=amount/coins[p];
        else
        {
            int f=0,t=0;
            m=amount/coins[p];
            k=amount%coins[p];
            for(int i=0;i<p;i++)
            {
                if(k==coins[i]){
                    m++;
                    f=1;
                    break;
                }
            }
            if(f==0)
            {
                int s=0;
                for(int i=0;i<p;i++)
                {
                    if(coins[i]<k)
                     t=1;
                    else
                     t=0;
                }
                if(t==0)
                 return -1;
                else
                {
                    for(int i=0;i<p;i++)
                    {
                        s+=coins[i];
                        if(k%coins[i]==0){
                            m=k/coins[i];
                            break;
                        }
                        else if(s==k){
                            m+=i+1;
                            break;
                        }
                    }
                }
            }
        }
        return m;
    }
};
