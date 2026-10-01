class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int n = s.size();
        
        if(n < 2) return n;
        int res = 1, size = 1;
        set<char> st;
        int p1 = 0, p2 = 1;
        st.insert(s[p1]);

        while(p2 != n) {
            while(st.find(s[p2]) != st.end()) {
                st.erase(s[p1]);
                p1++;
                size--;
            }
            st.insert(s[p2]);
            p2++;
            size++;
            res = max(res, size);
        
        }
        return res;
    }
};
