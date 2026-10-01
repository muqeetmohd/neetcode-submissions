class Solution {
public:
    int characterReplacement(string s, int k) {

        int l = 0, res = 0, maxF = 0;
        vector<int> mpp(26);

        for(int r = 0; r < s.size(); r++) {
            mpp[s[r]-'A']++;
            maxF = max(maxF, mpp[s[r]-'A']);
            if(r-l+1 - maxF <= k) {
                res = max(res, r-l+1);
            } else {
                while(r-l+1 - maxF > k) {
                    mpp[s[l]-'A']--;
                    l++;
                }
            }
        }
        return res;
    }
};
