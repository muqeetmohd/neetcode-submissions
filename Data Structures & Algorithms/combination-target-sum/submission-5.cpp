class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {

        vector<vector<int>> res;
        vector<int> temp;
        int i = 0;
        helper(nums, target, i, temp, res);
        return res;
        
    }

    void helper(vector<int>& nums, int target, int i, vector<int> &temp, vector<vector<int>> &res) {
        if(i == nums.size()) {
            if(target == 0){
                res.push_back(temp);
            }
            return;
        }

        if(nums[i] <= target) {
            temp.push_back(nums[i]);
            helper(nums, target - nums[i], i, temp, res);
            temp.pop_back();
        }

        helper(nums, target, i+1, temp, res);

    } 
};
