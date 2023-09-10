class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> c;
        for(char i:magazine)
         c[i]++;
        for(char i:ransomNote)
        {
            if((c[i]--)<=0)
             return false;
        }
        return true;
    }
};

//or

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int c[26]={0};
        for(char i:magazine)
         c[i-'a']++;
        for(char i:ransomNote)
        {
            if((c[i-'a']--)<=0)
             return false;
        }
        return true;
    }
};
