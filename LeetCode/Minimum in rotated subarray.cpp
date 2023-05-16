class Solution {
public:
    int findMin(vector<int>& nums) {
        int m=nums[0];
        for(int i=1;i<nums.size();i++)
         m=min(m,nums[i]);
        return m;

    }
};
