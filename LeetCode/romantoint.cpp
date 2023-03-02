class Solution {
public:
    int romanToInt(string s) {
        unordered_map <char, int> arr={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int l=s.length();
        int n=0;
        for(int i=0;i<l;i++)
        {
            if(arr[s[i]]<arr[s[i+1]])
             n-=arr[s[i]];
            else
             n+=arr[s[i]];
        }
        return n;
        
    }
};
