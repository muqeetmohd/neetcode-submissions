class Solution {
public:
    int findMin(vector<int> &nums) {
        int l = 0, r = nums.size()-1, res = INT_MAX;
        int mid;

        while(l < r) {
            mid = l + (r - l) / 2;
            if(nums[mid] > nums[r]) {
                l = mid + 1;
            } else {
                r = mid;
            }
        }
        return nums[l];
    }
};
