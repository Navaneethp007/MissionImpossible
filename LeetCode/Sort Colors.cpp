class Solution {
public:
    void sortColors(vector<int>& nums) {
        int a = 0, b = 0, c= nums.size()-1;
        while (b <= c)
        {
            if (nums[b]==0){
                swap(nums[b], nums[a]);
                a++;
                b++;
            }
            else if (nums[b]==1){
                b++;
            }
            else{
                swap(nums[b], nums[c]);
                c--;
            }
        }
    }
};
