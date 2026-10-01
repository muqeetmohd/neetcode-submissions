class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        cout<<"hi";
        unordered_map<int,int> mapy;
        vector<vector<int>> track(nums.size() + 1);
        cout<<"hi";

        for(int i = 0; i < nums.size(); i++) {
            mapy[nums[i]] = mapy[nums[i]] + 1;
        }


        for(const auto& entry : mapy) {
            track[entry.second].push_back(entry.first);
        }

        vector<int> res;

        for(int i = track.size()-1; i > 0; i--) {
            for(int j = 0; j < track[i].size(); j++) {
                if(res.size() == k) {
                    return res;
                }
                res.push_back(track[i][j]);
            }
        }
        return res;
    }
};
