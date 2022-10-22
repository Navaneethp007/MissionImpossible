class Solution {
public:
    bool canJump(vector<int>& nums) {
        int point=0;
        for(int i=nums.size()-2;i>=0;i--) {
            point++;
            if(nums[i]>=point)
                point=0;
        }
        if(point==0)
            return true;
      
        return false;   
    }
};