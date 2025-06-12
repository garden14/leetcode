class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ret; 
        unordered_map<string, vector<string>> reference; 

        for (string &s : strs) {
            string t = s; 
            sort(t.begin(), t.end());
            reference[t].push_back(s);
        }

        for (auto &elem : reference) {
            ret.push_back(elem.second);
        }

        return ret;
    }
};