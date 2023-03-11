//time limit exceeded solution
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int k=1;
        for(int i=0;i<nums.size();i++)
        {
            if(std::find(nums.begin()+k,nums.end(),nums[i])!=nums.end())
             return true;
            k++;
        }
        return false;
    }
};

//much optimised solution
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
             return true;
        }
        return false;
    }
};
