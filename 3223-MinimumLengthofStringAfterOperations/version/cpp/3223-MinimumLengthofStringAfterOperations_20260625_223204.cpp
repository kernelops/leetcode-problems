// Last updated: 6/25/2026, 10:32:04 PM
1class Solution {
2public:
3    int minimumLength(string s) 
4    {
5        unordered_map<char, vector<int>> mpp; 
6        for (int i=0; i<s.size(); i++) mpp[s[i]].push_back(i);
7
8        int ans=0; 
9        for (auto i: mpp){
10            auto vec = i.second; 
11            
12            if (vec.size() % 2 == 0) ans += 2; 
13            else ans += 1;
14        } 
15
16        return ans; 
17    }
18};