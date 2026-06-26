// Last updated: 6/26/2026, 8:32:36 PM
class Solution {
public:
    int minDifference(vector<int>& nums) {
        sort(begin(nums), end(nums));
        return mind(0, 0, nums.size()-1, nums);
    }
private:
    int mind(int count, int left, int right, vector<int> &nums){
        if(left >= right) return 0;
        if(count >= 3){
            return nums[right] - nums[left];
        }

        return min(mind(count+1, left+1, right, nums), mind(count+1, left, right-1, nums));
    }
};