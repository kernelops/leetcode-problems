// Last updated: 7/18/2026, 10:11:29 PM
1class Solution {
2public:
3    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) 
4    {
5        // construct adjacency matrix
6        vector<vector<int>> adj(numCourses); 
7        for (auto i: prerequisites){
8            adj[i[0]].push_back(i[1]); 
9        }
10        
11        // calculate indegree 
12        vector<int> indegree(numCourses, 0); 
13        for (auto i: prerequisites){
14            indegree[i[1]]++; 
15        }      
16
17        // push indegree 0 to queue
18        queue<int> q; 
19        for (int i=0; i<indegree.size(); i++)
20            if (indegree[i] == 0) q.push(i); 
21        
22        vector<int> ans; 
23        while (!q.empty()){
24            int node = q.front(); 
25            q.pop(); 
26            ans.push_back(node); 
27
28            for (int i: adj[node]){
29                indegree[i]--; 
30                if (indegree[i] == 0) q.push(i); 
31            }
32        }
33
34        return (ans.size() == numCourses); 
35    }
36};