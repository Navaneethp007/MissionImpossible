class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m=prices[0],c=0,d=0;
        for(int i=0;i<prices.size();i++)
        {
            if(m>prices[i])
             m=prices[i];
            c=prices[i]-m;
            if(d<c)
             d=c;
        }
        return d;  
    }
};
