// Last updated: 9/3/2026, 5:57:05 PM
1class Solution {
2public:
3    int minReorder(int n, vector<vector<int>>& connections) 
4    {
5        // create adjacency list
6        vector<vector<pair<int, int>>> adj(n); 
7        for (auto i: connections) {
8            adj[i[0]].push_back({i[1], 1}); 
9            adj[i[1]].push_back({i[0], 0});  
10        }    
11
12        vector<bool> vis(n, false);  
13        queue<int> q; int ans=0;
14
15        q.push(0); 
16        vis[0] = true; 
17
18        while (!q.empty()) {
19            int node = q.front(); 
20            q.pop(); 
21
22            for (auto i: adj[node]) {
23                if (!vis[i.first]) {
24                    q.push(i.first); 
25                    ans += i.second;
26                    vis[i.first] = true;  
27                }
28            }
29        }
30
31        return ans; 
32    }
33};