class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, high = nums.size()-1, piv = INT_MAX, mid;

        while(low < high) {
            mid = low + (high - low) / 2;
            if(nums[mid] > nums[high]) {
                low = mid+1;
            } else {
                high = mid;
            }
        }

         cout<<high<<";";

        if(nums[high] == target) return high;
        
        if(target >= nums[high] && target <= nums[nums.size()-1]) {
            low = high;
            high = nums.size()-1;
        } else {
            low = 0;
        }

        cout<<low<<"--"<<high;

        while(low <= high) {
            mid = low + (high-low)/2;
            // cout<<"Mid:-"<<mid;
            if(nums[mid] == target) return mid;
            else if(target > nums[mid]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return -1;
    }
};
