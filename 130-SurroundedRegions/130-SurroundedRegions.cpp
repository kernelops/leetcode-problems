// Last updated: 6/3/2026, 11:33:06 PM
class Solution {
public:
    void solve(vector<vector<char>>& board) 
    {
        int m = board.size(); 
        int n = board[0].size(); 

        queue<pair<int, int>> q; 
        vector<vector<int>> vis(m, vector<int> (n, 0)); 

        for (int j=0; j<n; j++)
        {
            if (board[0][j] == 'O') q.push({0, j}); 
            if (board[m-1][j] == 'O') q.push({m-1, j}); 
        }

        for (int i=0; i<m; i++)
        {
            if (board[i][0] == 'O') q.push({i, 0}); 
            if (board[i][n-1] == 'O') q.push({i, n-1});             
        }    

        int drow[] = {0, 0, -1, +1}; 
        int dcol[] = {-1, +1, 0, 0}; 

        while (!q.empty())
        {
            auto node = q.front(); 
            q.pop(); 
            vis[node.first][node.second] = 1; 
            for (int i=0; i<4; i++)
            {
                int nrow = node.first + drow[i]; 
                int ncol = node.second + dcol[i]; 

                if (nrow>=0 && ncol>=0 && nrow<m && ncol<n && vis[nrow][ncol] != 1)
                {
                    if (board[nrow][ncol] == 'O')
                    {
                        vis[nrow][ncol] = 1; 
                        q.push({nrow, ncol}); 
                    }
                }
            }
        }

        for (int i=0; i<m; i++)
        {
            for (int j=0; j<n; j++)
            {
                if (vis[i][j] == 0 && board[i][j] == 'O') board[i][j] = 'X'; 
            }
        }
    }
};