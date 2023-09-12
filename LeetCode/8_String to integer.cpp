class Solution {
public:
    int myAtoi(string s) {
        double c=0;
        int i=0,n=0,p=0;
        while(s[i]==' ')
         i++;
        while(s[i]=='-')
        {
            n++;
            i++;
        }
        while(s[i]=='+')
        {
            p++;
            i++;
        }
        while(i<s.length() && isdigit(s[i]))
        {
            c=c*10 + (s[i]-'0');
            i++;
        }
        if(n>0)
         c=-c;
        if((n>0 && p>0) || p>1 || n>1)
         return 0;
        if(c>INT_MAX)
         c=INT_MAX;
        if(c<INT_MIN)
         c=INT_MIN;
        return int(c);
    }
};
