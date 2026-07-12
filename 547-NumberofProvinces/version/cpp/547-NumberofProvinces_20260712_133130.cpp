// Last updated: 7/12/2026, 1:31:30 PM
1class Solution {
2public:
3    void dfs(int node, vector<vector<int>> &adj, vector<bool> &vis){
4        vis[node] = true; 
5
6        for (int i: adj[node]){
7            if (!vis[i]){
8                dfs(i, adj, vis); 
9            }
10        }
11    }
12    int findCircleNum(vector<vector<int>>& isConnected) {
13        vector<vector<int>> adj(isConnected.size()); 
14        for (int i=0; i<isConnected.size(); i++){
15            for (int j=0; j<isConnected.size(); j++){
16
17                if (isConnected[i][j] == 1 && i!=j){
18                    adj[i].push_back(j);
19                    adj[j].push_back(i);  
20                }
21            }
22        } 
23
24        vector<bool> visited(isConnected.size()); 
25        int count=0; 
26
27        for (int i=0; i<isConnected.size(); i++){
28            if (!visited[i]){
29                dfs(i, adj, visited);
30                count++; 
31            }
32        }
33
34        return count; 
35    }   
36};