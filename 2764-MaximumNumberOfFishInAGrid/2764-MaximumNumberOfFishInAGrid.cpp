// Last updated: 8/21/2026, 12:15:23 AM
class Solution {
public:
    void dfs(int i, int j, vector<vector<int>>& grid, vector<vector<bool>>& vis, int &count){
        vis[i][j] = true;
        count += grid[i][j]; 

        int drow[] = {1, 0, -1, 0}; 
        int dcol[] = {0, 1, 0, -1}; 

        for (int x=0; x<4; x++){
            int nrow = i + drow[x];
            int ncol = j + dcol[x]; 

            if (nrow >= 0 && nrow < grid.size() && ncol >= 0 && ncol < grid[0].size() && grid[nrow][ncol] > 0 && !vis[nrow][ncol]){
                dfs(nrow, ncol, grid, vis, count);  
            }
        }    
    }
    int findMaxFish(vector<vector<int>>& grid) 
    {
        int m=grid.size(), n=grid[0].size(); 
        vector<vector<bool>> vis(m, vector<bool> (n, false)); 
        int ans=0;

        for (int i=0; i<m; i++){
            for (int j=0; j<n; j++){
                if (grid[i][j] > 0 && !vis[i][j]){
                    int count=0; 
                    dfs(i, j, grid, vis, count); 
                    ans = max(ans, count); 
                }
                
            }
        } 

        return ans;    
    }
};