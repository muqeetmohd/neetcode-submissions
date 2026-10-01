class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        map<vector<int>,vector<string>> mp;

        for(int i = 0; i < strs.size(); i++) {
            vector<int> v(26);
            for(int j = 0; j < strs[i].size(); j++) {
                v[strs[i][j]-'a']++;
            }
            if(mp.find(v) == mp.end()) {
                mp[v] = {strs[i]};
            }
            else{
                mp[v].push_back({strs[i]});
            }
        }

        for(auto it = mp.begin(); it != mp.end(); it++) {
            res.push_back(it->second);
        }
        return res;
    }
};
