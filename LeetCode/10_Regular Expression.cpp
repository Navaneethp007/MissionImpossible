class Solution {
public:
    bool isMatch(string s, string p) {
         vector<vector<int>> a(s.length()+1,vector(p.length()+1,0)) ;
        a[0][0]=1;
        for(int i=0;i<=s.length();i++)
        {
            for(int j=1;j<=p.length();j++)
            {
                int f= i>0?1:0;
                if(p[j-1]=='*')
                 a[i][j]=a[i][j-2]||(f &&(s[i-1]==p[j-2] || p[j-2]=='.') && a[i-1][j]);
                else
                 a[i][j]=(f &&(s[i-1]==p[j-1] || p[j-1]=='.') && a[i-1][j-1]); 
            }
        }
        return a[s.length()][p.length()]==1;
    }
};
