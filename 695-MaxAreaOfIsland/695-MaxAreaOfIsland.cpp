// Last updated: 8/21/2026, 12:20:56 AM
class Solution {
public:
    void dfs(int i, int j, vector<vector<int>> &grid, vector<vector<bool>> &vis, int &count){
        vis[i][j] = true; 
        count++; 

        int drow[] = {1, 0, -1, 0}; 
        int dcol[] = {0, 1, 0, -1}; 

        for (int x=0; x<4; x++){
            int nrow = i + drow[x];
            int ncol = j + dcol[x]; 

            if (nrow >= 0 && nrow < grid.size() && ncol >= 0 && ncol < grid[0].size() && grid[nrow][ncol] == 1 && !vis[nrow][ncol]){
                dfs (nrow, ncol, grid, vis, count);  
            }
        }
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) 
    {
        vector<vector<bool>> vis(grid.size(), vector<bool> (grid[0].size(), false)); 

        int m = grid.size(), n = grid[0].size(); 
        int ans=0; 
        for (int i=0; i<m; i++){
            for (int j=0; j<n; j++){
                if (grid[i][j] == 1 && !vis[i][j]){
                    int count=0;
                    dfs(i, j, grid, vis, count); 
                    ans = max(ans, count); 
                }
            }
        }   

        return ans;  
    }
};