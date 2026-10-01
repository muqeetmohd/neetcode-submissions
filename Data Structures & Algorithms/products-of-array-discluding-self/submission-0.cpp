class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prefix = 1, postfix = nums[nums.size()-1];
        vector<int> res(nums.size());
        res[0] = 1;

        for(int i = 1; i < nums.size(); i++) {
            res[i] = res[i-1]*nums[i-1];
        }

        for(int i = nums.size()-2; i >= 0; --i) {
            res[i] = postfix * res[i];
            postfix = postfix * nums[i];
        }

        return res;

    }
};
