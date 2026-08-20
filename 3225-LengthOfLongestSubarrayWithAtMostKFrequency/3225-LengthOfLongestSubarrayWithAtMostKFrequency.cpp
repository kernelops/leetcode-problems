// Last updated: 8/21/2026, 12:15:09 AM
class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) 
    {
        unordered_map<int, int> mpp; 
        for (int i: nums) mpp[i]++; 

        unordered_map<int, int> freq; 
        int ans=0, l=0; 

        for (int r=0; r<nums.size(); r++){
            freq[nums[r]]++; 

            while (freq[nums[r]] > k){
                freq[nums[l]]--; 
                if (freq[nums[l]] == 0) freq.erase(nums[l]); 
                l++; 
            }
            
            ans = max(ans, r-l+1); 
        }

        return ans;     
    }
};