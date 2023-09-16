class Solution {
public:
    bool isMatch(string s, string p) {
        vector<vector<int>> a(s.length()+1,vector(p.length()+1,0)) ;
        a[0][0]=1;
        for(int i=0;i<p.length() && p[i]=='*';i++)
             a[0][i+1]=1;
        for(int i=1;i<=s.length();i++)
        {
            for(int j=1;j<=p.length();j++)
            {
                if(p[j-1]=='*')
                 a[i][j]=(a[i-1][j] || a[i][j-1]);
                else
                 a[i][j]=((s[i-1]==p[j-1] || p[j-1]=='?') && a[i-1][j-1]); 
            }
        }
        return a[s.length()][p.length()]==1;
    }
};
