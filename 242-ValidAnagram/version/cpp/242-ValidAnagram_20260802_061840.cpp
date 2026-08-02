// Last updated: 8/2/2026, 6:18:40 AM
1class Solution {
2public:
3    bool isAnagram(string s, string t) 
4    {
5        unordered_map<char, int> mpp1, mpp2; 
6        for (char c: s) mpp1[c]++; 
7        for (char c: t) mpp2[c]++; 
8
9        if (mpp1 == mpp2) return true; 
10        return false;     
11    }
12};