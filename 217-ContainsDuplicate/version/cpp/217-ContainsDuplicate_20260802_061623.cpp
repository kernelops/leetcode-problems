// Last updated: 8/2/2026, 6:16:23 AM
1class Solution {
2public:
3    bool containsDuplicate(vector<int>& nums) 
4    {
5        unordered_map<int, int> mpp; 
6        for (int i: nums) mpp[i]++; 
7
8        for (auto i: mpp) if (i.second > 1) return true; 
9
10        return false;  
11    }
12};