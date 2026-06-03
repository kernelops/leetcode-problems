// Last updated: 6/3/2026, 11:34:02 PM
class Solution {
public:
    bool canJump(vector<int>& nums) 
    {
        int maxIdx=0; 
        for (int i=0; i<nums.size(); i++){
            if (maxIdx < i) return false; 
            maxIdx = max(maxIdx, i+nums[i]); 
            if (maxIdx >= nums.size()-1) return true; 
        }   

        return false;
    }
};