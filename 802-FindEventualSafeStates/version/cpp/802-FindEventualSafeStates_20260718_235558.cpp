// Last updated: 7/18/2026, 11:55:58 PM
1class Solution {
2public:
3    vector<int> eventualSafeNodes(vector<vector<int>>& graph) 
4    {
5        // reverse a graph and find indegree > this will give us the outdegree of original graph
6        vector<vector<int>> adj(graph.size());
7        vector<int> indegree(graph.size(), 0); 
8        for (int i=0; i<graph.size(); i++){
9            for (int j=0; j<graph[i].size(); j++){
10                adj[graph[i][j]].push_back(i); 
11                indegree[i]++; 
12            }
13        }    
14
15        // push indegree 0 to queue
16        queue<int> q; 
17        for (int i=0; i<indegree.size(); i++)
18            if (indegree[i] == 0) q.push(i); 
19        
20        // topological sort
21        vector<int> ans; 
22        while (!q.empty()){
23            int node = q.front(); 
24            q.pop(); 
25            ans.push_back(node); 
26
27            for (int i: adj[node]){
28                indegree[i]--;
29                if (indegree[i] == 0) q.push(i); 
30            }
31        }
32
33        sort(ans.begin(), ans.end()); 
34
35        return ans; 
36    }
37};