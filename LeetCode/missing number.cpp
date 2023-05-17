class Solution {
public:
    int missingNumber(vector<int>& nums) {
        long long int p=-1;
        sort(nums.begin(),nums.end());
        for(long long int i=0;i<nums.size();i++)
        {
            if(i!=nums[i]){
             p=i;
             break;
            }
        }
        if(nums[nums.size()-1]!=nums.size())
         p=nums.size();
        return p;
    }
};
