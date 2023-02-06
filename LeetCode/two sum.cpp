class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> c (2,0);
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                    if(nums[i]+nums[j]==target)
                    {
                        c[0]=i;
                        c[1]=j;

                    }

                }
        }
        return c;
    }
};
