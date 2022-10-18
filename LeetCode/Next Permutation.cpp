class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i=nums.size()-1,temp,j;
        while(i>0&&nums[i]<=nums[i-1]){
            i--;
        }
        if(i==0){
            sort(nums.begin(),nums.end());
        }
        else{
            for(j=nums.size()-1;nums[j]<=nums[i-1];j--);
            temp=nums[j];
            nums[j]=nums[i-1];
            nums[i-1]=temp;
        }
        sort(nums.begin()+i,nums.end());
    }
};
