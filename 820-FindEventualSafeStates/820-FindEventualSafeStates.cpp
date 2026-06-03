// Last updated: 6/3/2026, 11:30:28 PM
class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) 
    {
        // We have to reverse the graph and the compute indegree
        vector<vector<int>> revgraph(graph.size());
        vector<int> indegree(graph.size(), 0); 
        for (int j=0; j<graph.size(); j++){
            for (auto i: graph[j]){
                revgraph[i].push_back(j); // reverse graph
                indegree[j]++;  // indegree compute
            }
        }

        queue<int> q; 
        for (int i=0; i<indegree.size(); i++){
            if (indegree[i] == 0) q.push(i); 
        }

        vector<int> safe;
        while (!q.empty()){
            int node = q.front(); q.pop(); 
            safe.push_back(node); 

            for (auto i: revgraph[node]){
                indegree[i]--; 
                if (indegree[i] == 0) q.push(i); 
            }
        }

        sort(safe.begin(), safe.end()); 
        return safe;
    }
};