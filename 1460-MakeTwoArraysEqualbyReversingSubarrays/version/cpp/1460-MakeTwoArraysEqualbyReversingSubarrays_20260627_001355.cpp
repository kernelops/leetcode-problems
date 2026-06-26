// Last updated: 6/27/2026, 12:13:55 AM
1class Solution {
2public:
3    bool canBeEqual(vector<int>& target, vector<int>& arr) 
4    {
5        unordered_map<int, int> mpp1; 
6        unordered_map<int, int> mpp2;
7
8        for (int i: target) mpp1[i]++; 
9        for (int i: arr) mpp2[i]++; 
10
11        if (mpp1 == mpp2) return true; 
12        return false;  
13    }
14};