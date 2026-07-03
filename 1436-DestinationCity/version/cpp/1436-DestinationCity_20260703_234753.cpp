// Last updated: 7/3/2026, 11:47:53 PM
1class Solution {
2public:
3    string destCity(vector<vector<string>>& paths) 
4    {
5        unordered_set<string> start;
6
7        for (auto p : paths)
8            start.insert(p[0]);
9
10        for (auto p : paths)
11            if (start.find(p[1]) == start.end())
12                return p[1];
13
14        return "";
15    }
16};