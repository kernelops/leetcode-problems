// Last updated: 6/3/2026, 11:30:03 PM
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) 
    {
        int m = grid.size(); int n = grid[0].size(); 
        vector<vector<int>> vis(m, vector<int>(n, 0));
        queue<pair<pair<int, int>, int>> q; 

        for (int i=0; i<m; i++)
        {
            for (int j=0; j<n; j++)
            {
                if (grid[i][j] == 2)
                {
                    q.push({{i, j}, 0}); 
                    vis[i][j] = 2;
                }
                else vis[i][j] = 0;
            }
        }

        int tm=0; 
        int drow[] = {-1, +1, 0, 0}; 
        int dcol[] = {0, 0, -1, +1}; 
        while (!q.empty())
        {
            auto orange = q.front(); 
            int r = orange.first.first; 
            int c = orange.first.second;  
            int t = orange.second; 
            tm = max(tm, t); 
            q.pop();
            for (int i=0; i<4; i++)
            {
                int nrow = r + drow[i]; 
                int ncol = c + dcol[i]; 

                if (nrow>=0 && ncol>=0 && nrow<m && ncol<n && vis[nrow][ncol] != 2 && grid[nrow][ncol] == 1)
                {
                    vis[nrow][ncol] = 2; 
                    q.push({{nrow, ncol}, t+1}); 
                }
            }
        }

        for (int i=0; i<m; i++)
        {
            for (int j=0; j<n; j++)
            {
                if (grid[i][j] == 1 && vis[i][j] == 0) return -1;
            }
        }

        return tm; 
    }
};