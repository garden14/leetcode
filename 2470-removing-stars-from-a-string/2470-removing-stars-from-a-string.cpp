class Solution {
public:
    string removeStars(string s) {
        string r;
        stack<char> result;

        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '*') result.pop();
            else result.push(s[i]); 
        }

        while(!result.empty()) {
            r += result.top();
            result.pop();
        }

        reverse(r.begin(),r.end());

        return r;
    }
};