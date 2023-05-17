class Solution {
public:
    int climbStairs(int n) {
        if(n<=3)
         return n;
        vector<int> a(n+1);
        a[0]=0;
        a[1]=1;
        a[2]=2;
        a[3]=3;
        for(int i=4;i<=n;i++)
            a[i]=a[i-1]+a[i-2];
        return a[n];
    }
};
