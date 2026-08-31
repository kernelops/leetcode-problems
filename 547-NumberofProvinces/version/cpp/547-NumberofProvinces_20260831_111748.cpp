// Last updated: 8/31/2026, 11:17:48 AM
1class Solution {
2public:
3    void dfs(int i, vector<vector<int>>& adj, vector<bool> &vis) {
4        vis[i] = true; 
5        for (int x: adj[i]) {
6            if (!vis[x]) dfs(x, adj, vis); 
7        }
8    }
9
10    int findCircleNum(vector<vector<int>>& isConnected) {   
11
12        vector<vector<int>> adj(isConnected.size()); 
13        // converting adjacency matrix to list    
14        for (int i=0; i<isConnected.size(); i++){
15            for (int j=0; j<isConnected.size(); j++){
16                if (isConnected[i][j] == 1 && i!=j){
17                    adj[j].push_back(i); 
18                    adj[i].push_back(j); 
19                }
20            }
21        }    
22
23        vector<bool> vis(isConnected.size(), false); 
24        int ans=0; 
25        for (int i=0; i<isConnected.size(); i++) {
26            if (!vis[i]) {
27                ans++; 
28                dfs(i, adj, vis); 
29            }
30        }
31
32        return ans; 
33    }
34};