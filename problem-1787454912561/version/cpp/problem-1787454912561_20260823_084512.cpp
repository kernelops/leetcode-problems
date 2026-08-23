// Last updated: 8/23/2026, 8:45:12 AM
1class Solution {
2public:
3    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) 
4    {
5        sort(nums.begin(), nums.end());
6        int prev = lower; 
7
8        vector<vector<int>> ans; 
9
10        for (int i: nums){
11            if (i < lower) continue; 
12            if (i > upper) break; 
13
14            if (prev < i) ans.push_back({prev, i-1}); 
15            prev = i+1; 
16        }
17
18        if (prev <= upper) ans.push_back({prev, upper}); 
19
20        return ans; 
21    }
22};