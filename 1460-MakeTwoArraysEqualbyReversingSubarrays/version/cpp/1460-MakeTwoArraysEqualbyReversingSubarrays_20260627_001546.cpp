// Last updated: 6/27/2026, 12:15:46 AM
1class Solution {
2public:
3    bool canBeEqual(vector<int>& target, vector<int>& arr) 
4    {
5        unordered_map<int, int> mpp1; 
6
7        for (int i: target) mpp1[i]++; 
8        for (int i: arr) mpp1[i]--; 
9
10        for (auto i: mpp1)
11            if (i.second>0) return false;  
12        return true;  
13    }
14};