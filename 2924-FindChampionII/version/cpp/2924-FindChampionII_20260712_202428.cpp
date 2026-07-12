// Last updated: 7/12/2026, 8:24:28 PM
1class Solution {
2public:
3    int findChampion(int n, vector<vector<int>>& edges) 
4    {
5        vector<vector<int>> adj(n);
6        for (auto i: edges)
7            adj[i[0]].push_back(i[1]); 
8
9        // Store incoming edges (reverse graph)
10        vector<vector<int>> incoming(n);
11        for (int u = 0; u < n; u++) {
12            for (int v : adj[u]) {
13                incoming[v].push_back(u);
14            }
15        }
16
17        int ans=0, count=0; 
18        for (int i=0; i<incoming.size(); i++){
19            if (incoming[i].size() == 0){
20                count++; 
21                ans = i; 
22            }
23            if (count > 1) return -1; 
24        }
25
26        return ans; 
27    }
28};