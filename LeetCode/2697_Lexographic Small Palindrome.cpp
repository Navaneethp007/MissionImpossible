class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int i=0,j=s.length()-1,a[26];
        for(int k=0;k<26;k++)
         a[k]=k+1;
        while(i<j && i<s.length()/2)
        {
            if(s[i]==s[j])
            {
                i++;
                j--;
            }
            else
            {
                if(a[s[i]-'a'] < a[s[j]-'a'])
                 s[j--]=s[i++];
                else
                 s[i++]=s[j--];
            }
        }
        return s;
    }
};

//or

class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int i=0,j=s.length()-1;
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                char c=min(s[i],s[j]);
                s[i]=s[j]=c;
            }
            i++;
            j--;
        }
        return s;
    }
};
