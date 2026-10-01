class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>> res;
        vector<int> v(26,0);
        map<vector<int>, vector<string>> mpp;

        for(auto str: strs){
            v = vector<int>(26,0);
            for(auto ch: str){
                v[ch-'a']+=1;
            }
            mpp[v].push_back(str);
        }

        for(auto& [key,value] : mpp) {
            res.push_back(value);
        }
        return res;
    }
};
