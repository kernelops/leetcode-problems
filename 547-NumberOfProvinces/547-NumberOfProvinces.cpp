// Last updated: 6/3/2026, 11:30:54 PM
class Solution {
public:

    int findCircleNum(vector<vector<int>>& adj) 
    {
        int n = adj.size(); 
        vector<vector<int>> adjls(n);

        // convert adj matrix to adj list
        for (int i=0; i<n; i++)
        {
            for (int j=0; j<n; j++)
            {
                if (adj[i][j] == 1 && i!=j)
                {
                    adjls[i].push_back(j);
                    adjls[j].push_back(i); 
                }
            }
        }   

        vector<int> vis(n, 0);
        int count=0; 
        
        for (int i=0; i<n; i++)
        {
            if (!vis[i])
            {
                count++; 
                queue<int> q; 
                q.push(i); 
                vis[i] = 1; 

                while (!q.empty())
                {
                    int node = q.front(); 
                    q.pop(); 

                    for (auto it: adjls[node])
                    {
                        if (!vis[it])
                        {
                            vis[it] = 1; 
                            q.push(it); 
                        }
                    }
                }
            }
        }
        return count;
    }
};