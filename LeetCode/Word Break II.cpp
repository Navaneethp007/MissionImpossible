class Solution {
public:
    vector<string> result;
    unordered_map<string, vector<string>> memo;
    vector<string> recWordBreak(string s, unordered_set<string>& setStr) {
        if(memo.count(s)) return memo[s];
        string curStr = "";
        vector<string> ret;
        int n = (int) s.size();
        for(int i = 0; i < n; i++) {
            curStr += s[i];
            if(setStr.count(curStr)) {
                if(i == n-1) {
                    ret.emplace_back(curStr);
                    memo[curStr] = ret;
                    return ret;
                }
                vector<string> rest = recWordBreak(s.substr(i+1), setStr);
                for(string str : rest) {
                    string insertStr = curStr + " " + str;
                    ret.emplace_back(insertStr);
                }
            }
        }
        memo[s] = ret;
        return ret;
    }
    
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> setStr;
        for(auto& p : wordDict) {
            setStr.emplace(p);
        }
        return recWordBreak(s, setStr);
        
    }
};