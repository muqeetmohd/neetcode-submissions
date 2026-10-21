class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo = 0, hi = nums.size()-1, mid;

        while(hi >= lo) {
            mid = (lo + hi)/2;

            cout<<nums[mid]<<" ";

            if(nums[mid] == target) return mid;

            if(nums[mid] > target) {
                hi = mid-1;
            } else {
                lo = mid+1;
            }
        }
        return -1;
    }
};
