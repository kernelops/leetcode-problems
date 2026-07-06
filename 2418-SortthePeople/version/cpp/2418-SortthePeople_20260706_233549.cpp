// Last updated: 7/6/2026, 11:35:49 PM
1class Solution {
2public:
3    vector<string> sortPeople(vector<string>& names, vector<int>& heights) 
4    {
5        priority_queue<pair<int, string>> pq; 
6
7        for (int i=0; i<names.size(); i++) pq.push({heights[i], names[i]}); 
8
9        vector<string> ans; 
10
11        while (!pq.empty()){
12            auto node = pq.top(); 
13            pq.pop(); 
14            ans.push_back(node.second); 
15        } 
16
17        return ans;     
18    }
19};