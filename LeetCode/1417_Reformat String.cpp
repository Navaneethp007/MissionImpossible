class Solution {
public:
    string reformat(string s) {
        string a="",d="";
        for(char i:s)
        {
            if(isdigit(i))
             d+=i;
            else
             a+=i;
        }
        if(abs(int(a.length()-d.length()))>1)
         return "";
        else{
        int i=0,j=0,k=0;
        bool ch=a.length()>d.length();
        while(i<s.length())
        {
            if(ch)
                s[i++]=a[j++];
            else
                s[i++]=d[k++];
            ch=!ch;
        }
        return s;
        }
    }
};
