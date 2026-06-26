// Last updated: 6/26/2026, 6:07:57 PM
1class Solution {
2public:
3    bool canJump(vector<int>& nums) 
4    {
5        int maxIdx=0; 
6        for (int i=0; i<nums.size(); i++){
7            if (maxIdx < i) return false;
8            maxIdx = max(maxIdx, i + nums[i]);
9            if (maxIdx >= nums.size()-1) return true;       
10        }        
11
12        return false; 
13    }
14};