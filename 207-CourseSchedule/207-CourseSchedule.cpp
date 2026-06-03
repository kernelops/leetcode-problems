// Last updated: 6/3/2026, 11:32:15 PM
class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) 
    {
        // creating adjacency list
        vector<vector<int>> adj(numCourses);
        for (auto i: prerequisites){
            adj[i[1]].push_back(i[0]); 
        }

        // checking for topological sorting
        // if topo sort size is equal to number of courses, there are no cyclic dependency

        // Topological Sort Code
        vector<int> topo; 
        queue<int> q; 

        vector<int> indegree(numCourses, 0); 
        // getting the indegree of the graph
        for (auto& i: prerequisites)
            indegree[i[0]]++;

        for (int i=0; i<indegree.size(); i++){
            if (indegree[i] == 0) q.push(i);
        }

        while (!q.empty()){
            auto node = q.front(); q.pop(); 
            topo.push_back(node); 

            for (auto i: adj[node]){
                indegree[i]--; 
                if (indegree[i] == 0) q.push(i); 
            }
        }

        if (topo.size() == numCourses) return true;
        
        return false;
    }
};