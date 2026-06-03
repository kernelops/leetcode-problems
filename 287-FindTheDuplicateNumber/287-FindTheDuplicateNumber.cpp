// Last updated: 6/3/2026, 11:31:29 PM
class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        if (nums.size() == 1) return nums[0]; 
        sort(nums.begin(), nums.end()); 
        for (int i=1; i<=nums.size()-1; i++){
            if (nums[i] == nums[i-1]) return nums[i];
        }

        return -1;
    }
};