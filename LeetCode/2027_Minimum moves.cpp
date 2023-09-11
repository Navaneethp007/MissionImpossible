class Solution {
public:
    int minimumMoves(string s) {
        int c=0,i=0;
       for(int i=0;i<s.length();)
       {
           if(s[i]=='X')
           {
               c++;
               i+=3;
           }
           else
            i++;
       }
        return c;
    }
};
