class Solution {
public:
    bool isPalindrome(int x) {
        string s=to_string(x);
        int l=s.length();
        int i=0,j=l-1;
        while(i<=l/2 && s[i]==s[j])
        {
            i++;
            j--;
        }
        if(i>=l/2)
         return true;
        else
         return false;
    }
};
