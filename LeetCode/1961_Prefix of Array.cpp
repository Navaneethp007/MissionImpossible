class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
       string a="";
       for(string i:words)
       {
           a+=i;
           if(a==s)
            return true;
       }
       return false;
    }
};
