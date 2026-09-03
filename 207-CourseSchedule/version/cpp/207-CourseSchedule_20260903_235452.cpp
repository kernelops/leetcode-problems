// Last updated: 9/3/2026, 11:54:52 PM
1class Solution {
2public:
3    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
4        // adjacency matrix and indegree
5        vector<vector<int>> adj(numCourses); 
6        vector<int> indegree(numCourses, 0); 
7        for (auto i: prerequisites) {
8            adj[i[0]].push_back(i[1]); 
9            indegree[i[1]]++; 
10        }
11
12        queue<int> q; 
13        for (int i=0; i<indegree.size(); i++)
14            if (indegree[i] == 0) q.push(i); 
15        
16        vector<int> ans; 
17        while (!q.empty()) {
18            int node = q.front(); 
19            q.pop(); 
20            ans.push_back(node); 
21
22            for (int i: adj[node]) {
23                indegree[i]--; 
24                if (indegree[i] == 0) q.push(i); 
25            }
26        }
27
28        return (ans.size() == numCourses); 
29    }
30};