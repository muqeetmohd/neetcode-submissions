class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        if(s.size() == 0) return 0;

        unordered_set<char> st;
        int res = 0, l = 0, r = 0, temp = 0;

        while(r < s.size()) {
            if(st.find(s[r]) != st.end()) {

                while(st.find(s[r]) != st.end()) {
                    st.erase(s[l]);
                    l++;
                    temp--;
                }
            }
            else {
                st.insert(s[r]);    
                temp++;
                r++;
                // continue;
            }
            res = max(res,temp);
        }
        return res;
    }
};
