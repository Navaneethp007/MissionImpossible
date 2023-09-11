class Solution {
public:
    int lengthOfLastWord(string s) {
        int f=0,c=0;
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]==' '&& f==1)
             break;
            if(s[i]!=' ')
            {
                f=1;
                c++;
            }
        }
        return c;
    }
};
