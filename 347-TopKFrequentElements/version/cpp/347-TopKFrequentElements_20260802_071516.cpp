// Last updated: 8/2/2026, 7:15:16 AM
1class Solution {
2public:
3    vector<int> topKFrequent(vector<int>& nums, int k) 
4    {
5        unordered_map<int, int> mpp; 
6
7        for (int i: nums) mpp[i]++; 
8
9        priority_queue<pair<int, int>> pq; 
10        for (auto i: mpp) pq.push({i.second, i.first}); 
11
12        vector<int> ans; 
13        for (int i=0; i<k; i++){
14            ans.push_back(pq.top().second); 
15            pq.pop(); 
16        }
17
18        return ans; 
19    }
20};