// Last updated: 9/4/2026, 12:49:36 AM
1class Solution {
2public:
3    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) 
4    {
5        // adjacency list and indegree
6        vector<vector<int>> adj(numCourses); 
7        vector<int> indegree(numCourses, 0); 
8        for (auto i: prerequisites) {
9            adj[i[1]].push_back(i[0]); 
10            indegree[i[0]]++; 
11        }    
12
13        queue<int> q; 
14        for (int i=0; i<indegree.size(); i++)
15            if (indegree[i] == 0) q.push(i); 
16
17        vector<int> ans; 
18        while (!q.empty()) {
19            int node = q.front(); 
20            q.pop(); 
21            ans.push_back(node); 
22
23
24            for (int i: adj[node]) {
25                indegree[i]--; 
26                if (indegree[i] == 0) q.push(i); 
27            }
28        }
29
30        if (ans.size() == numCourses) return ans;
31        return {}; 
32    }
33};