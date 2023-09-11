class Solution {
public:
    int longestPalindrome(string s) {
        map <char,int> c;
        int cp=0;
        for(char i:s){
         c[i]++;
         if(c[i]%2==1)
          cp++;
        else
         cp--;
        }
        if(cp>1)
         return s.length()-cp+1;
        else
         return s.length();
        
    }
};
