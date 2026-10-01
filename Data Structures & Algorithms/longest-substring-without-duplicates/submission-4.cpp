class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 0) return 0;
        int l = 0, r = 0, res = 0;
        unordered_set<int> st;

        while(r < s.size()) {
            if(st.find(s[r]) != st.end()) {
                while(st.find(s[r]) != st.end()) {
                st.erase(s[l]);
                l++;
                }
            }
            else {
                st.insert(s[r]);
                r++;
            }
            res = max(res, r-l);
        }

        return res;
    }
};
