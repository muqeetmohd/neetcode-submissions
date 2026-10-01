class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mpp;
        for(const char& c: s){
            mpp[c]++;
        }
        
        for(const char& c: t){
            mpp[c]--;
        }

        for(auto it = mpp.begin(); it != mpp.end(); ++it) {
            if (it->second != 0) return false;
        }

        return true;
    
    }
};
