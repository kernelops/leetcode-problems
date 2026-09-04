// Last updated: 9/5/2026, 12:03:22 AM
1class Solution {
2public:
3    int maxSubArray(vector<int>& nums) {
4        int ans=INT_MIN, val=0; 
5        for (int i: nums) {
6            val += i; 
7            ans = max(ans, val);
8            if (val < 0) val = 0;  
9        }
10
11        return ans;
12    }
13};