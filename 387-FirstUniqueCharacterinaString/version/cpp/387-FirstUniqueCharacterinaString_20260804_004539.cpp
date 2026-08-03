// Last updated: 8/4/2026, 12:45:39 AM
1class Solution {
2public:
3    int firstUniqChar(string s) 
4    {
5        unordered_map<char, int> mpp; 
6        for (char c: s) mpp[c]++; 
7
8        for (int i=0; i<s.size(); i++)
9            if (mpp[s[i]] == 1) return i; 
10        
11        return -1;    
12    }
13};