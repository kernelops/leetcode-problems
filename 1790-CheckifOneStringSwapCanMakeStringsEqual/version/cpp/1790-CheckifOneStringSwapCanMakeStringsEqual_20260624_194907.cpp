// Last updated: 6/24/2026, 7:49:07 PM
1class Solution {
2public:
3    bool areAlmostEqual(string s1, string s2) 
4    {
5        if (s1.size() != s2.size()) return false;
6        unordered_map<char, int> mpp1; 
7        unordered_map<char, int> mpp2; 
8
9        for (char c: s1) mpp1[c]++;
10        for (char c: s2) mpp2[c]++; 
11
12        if (mpp1 != mpp2) return false; 
13          
14        int mismatch=0; 
15        for (int i=0; i<s1.size(); i++){
16            if (s1[i] != s2[i]) mismatch++; 
17        }
18
19        if (mismatch == 2 || mismatch == 0) return true; 
20        return false; 
21    }
22};