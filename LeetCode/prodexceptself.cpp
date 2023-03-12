//time limit exceeded solution
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector <int> p;
        long long int n = nums.size(), c = 0, d = 0;
        p.resize(n);
        p[0] = std::accumulate(nums.begin() + 1, nums.end(), 1, [](int a, int b){
            return a * b;
        });
        p[n - 1] = std::accumulate(nums.begin(), nums.end() - 1, 1, [](int a, int b){
            return a * b;
        });
        for (int i = 1; i < n - 1; i++) {
            c = std::accumulate(nums.begin(), nums.begin() + i, 1, [](int a, int b){
                return a * b;
            });
            d = std::accumulate(nums.begin() + i + 1, nums.end(), 1, [](int a, int b){
                return a * b;
            });
            p[i] = c * d;
        }
        return p;
    }
};

//optimised solution
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector <int> p(nums),s(nums);
        int n=nums.size();
        vector<int> a(n);
        partial_sum(begin(p),end(p),begin(p),multiplies<int>());
        partial_sum(rbegin(s),rend(s),rbegin(s),multiplies<int>());
        for(int i=0;i<n;i++)
        {
            if(i>0 && i+1<n)
             a[i]=p[i-1]*s[i+1];
            else if(i==0)
             a[i]=s[i+1];
            else if(i+1>=n)
             a[i]=p[i-1];
        }
        return a;
    }
};
