// Last updated: 9/4/2026, 12:01:30 PM
1class Solution {
2public:
3    int firstStableIndex(vector<int>& nums, int k) {
4        int n = nums.size(); 
5        vector<int> suffixMin(n); 
6        suffixMin[n-1] = nums[n-1]; 
7        for (int i=n-2; i>=0; i--) {
8            suffixMin[i] = min(suffixMin[i+1], nums[i]); 
9        }
10
11        int prefixMax = INT_MIN; 
12        for (int i=0; i<nums.size(); i++) {
13            prefixMax = max(prefixMax, nums[i]); 
14
15            if (prefixMax - suffixMin[i] <= k) return i; 
16        }
17
18        return -1; 
19    }
20};