// Last updated: 7/1/2026, 10:58:26 AM
1class Solution {
2public:
3    char findTheDifference(string s, string t) 
4    {
5        unordered_map<char, int> mpp; 
6
7        for (char c: t) mpp[c]++; 
8        for (char c: s){
9            mpp[c]--; 
10            if (mpp[c] == 0) mpp.erase(c); 
11        }
12
13        for (auto i: mpp) return i.first; 
14
15        return '\0'; 
16    }
17};