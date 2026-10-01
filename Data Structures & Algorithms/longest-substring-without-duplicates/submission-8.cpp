class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<int> st;
        int n = s.size(), p1 = 0, p2 = 0, curr = 0, res = 0;

        while(p2 < n) {
            if(p2 < n && st.find(s[p2]) != st.end()){
                st.erase(s[p1]);
                p1++;
                curr--;
            } else {
            st.insert(s[p2]);
            curr++;
            res = max(res,curr);
            p2++;

            }
        }        

        return res;
    }
};
