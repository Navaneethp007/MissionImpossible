class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> c(2*n,0);
        int j=0;
        for(int i=0;i<n;i++)
        {
           c[j]=nums[i];
           c[j+1]=nums[i+n];
           j=j+2; 
        }
        return c; 
    }
};
