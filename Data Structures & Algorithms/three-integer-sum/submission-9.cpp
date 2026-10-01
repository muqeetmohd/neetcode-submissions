class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int l = 0, r = n-1;
        vector<vector<int>> res;

        for(int i = 0; i < n; i++) {
            l = i+1;
            r = n-1;
            if(nums[i] > 0) break;
            if(i > 0 && nums[i] == nums[i-1]) continue;

            while(l < r) {
                int sum = nums[i] + nums[l] + nums[r];

                if(sum == 0){
                    res.push_back({nums[i], nums[l], nums[r]});
                    l++;
                    r--;
                    while(l > 0 && nums[l] == nums[l-1]) {
                        l++;
                    }
                }
                else if(sum > 0){
                    r--;
                }
                else{
                    l++;
                }

            }
            
        }
        return res;
        
    }
};
