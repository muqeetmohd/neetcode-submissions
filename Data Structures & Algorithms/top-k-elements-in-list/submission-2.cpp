class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;

        vector<vector<int>> track(nums.size() + 1);

        vector<int> res;

        for(int i = 0; i < nums.size(); i++) {
            freq[nums[i]] += 1;
        }

        for(const auto& it: freq) {
            track[it.second].push_back(it.first);
        }

        for(int i = track.size()-1; i > 0; i--) {
            for(int j = 0; j < track[i].size(); j++) {
                if(res.size() == k) return res;
                res.push_back(track[i][j]);
            }
        }
        return res;
    }
};
