class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        bool dp[301] = {false,};
        dp[0] = true;

        for(int i=0; i<s.length(); i++) {
            if(!dp[i])
                continue;
            for(int j =0; j<wordDict.size(); j++) {
                string word = wordDict[j];
                string cmp = s.substr(i,word.length());
                if(cmp.compare(word) == 0)
                    dp[i+word.length()] = true;
            }
        }

        if(dp[s.length()] == true)
            return true;
        return false;
    }
};