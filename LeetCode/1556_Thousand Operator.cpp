class Solution {
public:
    string thousandSeparator(int n) {
        string s=to_string(n),a="";
        int c=0,b=s.length()-1;
        if(s.length()>=4)
        {
            for(int i=s.length()-1;i>=0;i--)
            {
                c++;
                if(b-3>=0 && b-3==i){
                 a+='.';
                 b=i;
                }
                a+=s[i];
            }
            reverse(a.begin(),a.end());
            return a;
        }
        else
         return s;
    }
};
