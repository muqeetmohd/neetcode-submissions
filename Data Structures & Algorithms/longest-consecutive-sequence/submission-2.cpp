class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;

        int res = 1;
        unordered_set<int> st;

        for(int i = 0; i < nums.size(); i++) {
            st.insert(nums[i]);
        }

        for(int i = 0; i < nums.size(); i++) {
            int seq = 0;
            if(st.find(nums[i]) == st.end()) continue;
            if(st.find(nums[i]+1) != st.end()) {
                seq++;
                int temp = nums[i]+1;
                while(st.find(temp) != st.end()) {
                    seq++;
                    res = max(res,seq);
                    temp++;
                }
            }
        }
        return res;
    }
};