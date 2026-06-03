// Last updated: 6/3/2026, 11:34:21 PM
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int st = 0, end = nums.size() - 1;

        while(st <= end){
            int mid = st + (end - st) / 2;

            if(nums[mid] == target){
                int left = mid, right = mid;

                while(left >= 0 && nums[left] == target) left--;
                while(right < nums.size() && nums[right] == target) right++;

                return {left + 1, right - 1};
            }
            else if(nums[mid] < target)
                st = mid + 1;
            else
                end = mid - 1;
        }

        return {-1, -1};
    }
};