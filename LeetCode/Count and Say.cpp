class Solution {
public:
    string countAndSay(int n) {
        string ans = "1";
        for(int i = 1; i < n; i++) {
            string newAns = "";
            int count = 1;
            char lastChar = ans[0];
            for(int i = 1; i < (int) ans.size(); i++) {
                if(ans[i] == lastChar) {
                    count++;
                } else {
                    newAns += '0' + count;
                    newAns += lastChar;
                    lastChar = ans[i];
                    count = 1;
                }
            }
            newAns += '0' + count;
            newAns += lastChar;
            ans = newAns;
        }
        return ans;
    }
};