class Solution {
public:
    vector<int> countBits(int n) {
        vector <int> a;
        int c=0;
        a.push_back(0);
        for(int i=1;i<=n;i++)
        {
            int d=i;
            while(d!=0)
            {
                c=c+d%2;//remainder is either 0 or 1
                d=d/2;
            }
            a.push_back(c);
            c=0;
        }
        return a;
    }
};
