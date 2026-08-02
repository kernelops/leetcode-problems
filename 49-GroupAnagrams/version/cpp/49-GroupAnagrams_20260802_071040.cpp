// Last updated: 8/2/2026, 7:10:40 AM
1class Solution {
2public:
3    vector<vector<string>> groupAnagrams(vector<string>& strs) 
4    {
5        if (strs.size() == 1) return {strs}; 
6
7        unordered_map<string, vector<string>> mpp; 
8        for (string s: strs){
9            string key = s; 
10            sort(key.begin(), key.end()); 
11
12            mpp[key].push_back(s); 
13        }    
14
15        vector<vector<string>> ans; 
16        for (auto i: mpp){
17            ans.push_back(i.second);
18        }
19
20        return ans; 
21    }
22};