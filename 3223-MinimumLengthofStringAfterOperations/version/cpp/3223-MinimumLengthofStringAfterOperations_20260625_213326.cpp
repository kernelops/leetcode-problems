// Last updated: 6/25/2026, 9:33:26 PM
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
12            while (vec.size() >= 3){
13                vec.erase(vec.begin());
14                vec.pop_back(); 
15            }
16            ans += (int)vec.size(); 
17        } 
18
19        return ans; 
20    }
21};