// Last updated: 9/5/2026, 9:53:55 AM
1class Solution {
2public:
3    int firstStableIndex(vector<int>& nums, int k) {
4        vector<int> suffixMin(nums.size()); 
5        suffixMin[nums.size()-1] = nums[nums.size()-1]; 
6
7        for (int i = nums.size()-2; i >= 0; i--) 
8            suffixMin[i] = min(suffixMin[i+1], nums[i]); 
9
10        vector<int> prefixMax(nums.size());
11        prefixMax[0] = nums[0];   
12
13        for (int i=0; i<nums.size(); i++) {
14            if (i > 0) 
15                prefixMax[i] = max(prefixMax[i - 1], nums[i]);
16
17            int val = prefixMax[i] - suffixMin[i];
18
19            if (val <= k) return i; 
20        }  
21
22        return -1; 
23    }
24};