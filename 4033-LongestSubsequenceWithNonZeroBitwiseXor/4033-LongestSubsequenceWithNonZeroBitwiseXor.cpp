// Last updated: 8/21/2026, 12:14:16 AM
class Solution {
public:
    int longestSubsequence(vector<int>& nums) 
    {
        int ans=0; 
        for (int i: nums) ans = ans ^ i; 

        if (ans != 0) return nums.size(); 

        for (int i: nums){
            if (i != 0) return nums.size()-1; 
        }

        return 0; 
    }
};