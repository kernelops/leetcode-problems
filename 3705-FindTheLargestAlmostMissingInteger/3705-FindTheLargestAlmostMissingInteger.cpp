// Last updated: 8/21/2026, 12:14:28 AM
class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int, int> mpp; 
        int ans=-1; 

        // Case 1: k == 1
        if (k == 1) {
            for (int i : nums) 
                mpp[i]++;

            for (auto& [num, freq] : mpp) {
                if (freq == 1)
                    ans = max(ans, num);
            }

            return ans;
        }

        
        // Case 2: 1 < k < nums.size()
        if (k > 1 && k < nums.size()){
            for (int i: nums) mpp[i]++; 
            if (mpp[nums[0]] == 1){
                if (mpp[nums[nums.size()-1]] == 1) return max(nums[0], nums[nums.size()-1]); 
                else return nums[0]; 
            }

            else {
                if (mpp[nums[nums.size()-1]] == 1) 
                    return nums[nums.size()-1];
                else 
                    return -1;
            }
        }

        // Case 3: k == n

        if (k == nums.size()){
            for (int i: nums) ans = max(ans, i); 
            return ans; 
        }
        
        return -1; 
    }
};