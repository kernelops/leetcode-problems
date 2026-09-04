// Last updated: 9/5/2026, 12:22:05 AM
1class Solution {
2public:
3    bool canJump(vector<int>& nums) {
4        int n = nums.size();
5        int maxReach=0;
6        for (int i=0; i<nums.size(); i++) {
7            int current = i + nums[i]; 
8            maxReach = max(maxReach, current); 
9            if (maxReach >= n-1) return true; 
10            if (maxReach <= i) return false;
11        }
12        return false; 
13    }
14};