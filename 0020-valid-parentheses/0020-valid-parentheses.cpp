class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        map<int, int> mp;
        
        mp['('] = +1;
        mp['['] = +2;
        mp['{'] = +3;
        mp[')'] = -1;
        mp[']'] = -2;
        mp['}'] = -3;

        stack<int> st;
        for(auto c : s){
            if(mp[c] > 0) st.push(c);
            else{
                if(st.empty() || mp[c] + mp[st.top()] != 0) return false;
                st.pop();
            } 
        }
        if(st.empty()) return true;
        return false;
    }
};