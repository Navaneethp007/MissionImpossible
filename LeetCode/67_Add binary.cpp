class Solution {
public:
    string addBinary(string a, string b) {
        int c=0;
        int i=a.length()-1;
        int j=b.length()-1;
        string ans="";
        while(i>=0 || j>=0 || c)
        {
            if(i>=0)
             c+=a[i--]-'0';
            if(j>=0)
             c+=b[j--]-'0';
            ans+=c%2+'0';
            c/=2;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
