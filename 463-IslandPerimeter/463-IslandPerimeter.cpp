// Last updated: 8/21/2026, 12:21:55 AM
class Solution {
public:
    void dfs(int i, int j, vector<vector<int>>& grid, vector<vector<bool>>& vis, int &perimeter){
        vis[i][j] = true; 
        int drow[] = {1, 0, -1, 0}; 
        int dcol[] = {0, 1, 0, -1}; 

        for (int x=0; x<4; x++){
            int nrow = i + drow[x]; 
            int ncol = j + dcol[x]; 

            if (nrow >= 0 && ncol >= 0 && nrow < grid.size() && ncol < grid[0].size()){
                if (grid[nrow][ncol] == 0) perimeter++; 
                else{
                    if (!vis[nrow][ncol])
                        dfs(nrow, ncol, grid, vis, perimeter); 
                }
            }
            else perimeter++; 
        }
    }
    int islandPerimeter(vector<vector<int>>& grid) 
    {
        int m=grid.size(), n=grid[0].size(), i=0, j=0, perimeter=0;
        vector<vector<bool>> vis(m, vector<bool> (n, false)); 
        for (i=0; i<m; i++){
            for (j=0; j<n; j++){
                if (grid[i][j] == 1 && !vis[i][j]){
                    dfs(i, j, grid, vis, perimeter); 
                    //return perimeter; 
                } 
            }
        }    
        return perimeter; 
    }
};