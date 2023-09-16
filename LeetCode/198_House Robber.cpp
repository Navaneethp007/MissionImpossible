class Solution {
public:
    int rob(vector<int>& nums) {
        int a=0,b=0;
        for(int i:nums)
        {
            int t=max(a+i,b);
            a=b;
            b=t;
        }
        return b;
    }
};
