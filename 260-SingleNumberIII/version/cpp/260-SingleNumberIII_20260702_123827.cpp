// Last updated: 7/2/2026, 12:38:27 PM
1class Solution {
2public:
3    vector<int> singleNumber(vector<int>& nums) 
4    {
5        unordered_map<int, int> mpp; 
6        for (int i: nums) mpp[i]++; 
7
8        vector<int> ans;
9        for (auto i: mpp)
10            if (i.second == 1) ans.push_back(i.first); 
11        
12        return ans; 
13    }
14};