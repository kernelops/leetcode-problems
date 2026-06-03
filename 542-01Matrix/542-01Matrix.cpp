// Last updated: 6/3/2026, 11:30:58 PM
class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) 
    {
        int m = mat.size(); 
        int n = mat[0].size(); 

        vector<vector<int>> vis(m, vector<int> (n, 0));
        vector<vector<int>> dist(m, vector<int> (n, 0)); 

        queue<pair<pair<int, int>, int>> q;
        
        // Initial values of 1
        for (int i=0; i<m; i++)
        {
            for (int j=0; j<n; j++)
            {
                if (mat[i][j] == 0)
                {
                    q.push({{i, j}, 0});
                    vis[i][j] = 1; 
                    dist[i][j] = 0;
                }
            }
        }

        int drow[] = {0, 0, -1, +1}; 
        int dcol[] = {-1, +1, 0, 0}; 

        while (!q.empty())
        {
            auto node = q.front(); 
            q.pop(); 

            for (int i=0; i<4; i++)
            {
                int nrow = node.first.first + drow[i]; 
                int ncol = node.first.second + dcol[i];

                if (nrow>=0 && ncol>=0 && nrow<m && ncol<n && vis[nrow][ncol] != 1)
                {
                    vis[nrow][ncol] = 1; 
                    q.push({{nrow, ncol}, node.second+1}); 
                    dist[nrow][ncol] = node.second+1; 
                } 
            }
        }

        return dist;
    }
};