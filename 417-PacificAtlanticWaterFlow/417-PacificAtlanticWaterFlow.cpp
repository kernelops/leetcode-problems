// Last updated: 8/21/2026, 12:22:33 AM
class Solution {
public:
    void dfs(int i, int j, vector<vector<int>>& heights, vector<vector<bool>>& vis){
        vis[i][j] = true; 

        int drow[] = {1, 0, -1, 0}; 
        int dcol[] = {0, 1, 0, -1}; 

        for (int x=0; x<4; x++){
            int nrow = i + drow[x]; 
            int ncol = j + dcol[x]; 

            if (nrow >=0 && ncol >= 0 && nrow < heights.size() && ncol < heights[0].size() && !vis[nrow][ncol] && heights[nrow][ncol] >= heights[i][j]){
                dfs(nrow, ncol, heights, vis); 
            }
        }
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) 
    {
        int m = heights.size(), n = heights[0].size(); 
        vector<vector<bool>> pacific(m, vector<bool> (n, false)); 
        vector<vector<bool>> atlantic(m, vector<bool> (n, false));
        vector<vector<int>> ans; 

        // pacific (1st row)
        for (int i=0; i<n; i++) 
            if (!pacific[0][i]) dfs(0, i, heights, pacific); 
        
        // pacific (1st col)
        for (int i=0; i<m; i++)
           if (!pacific[i][0]) dfs(i, 0, heights, pacific); 
        
        //atlantic (last col)
        for (int i=0; i<m; i++)
            if (!atlantic[i][n-1]) dfs(i, n-1, heights, atlantic);
        
        // atlantic (last row)
        for (int i=0; i<n; i++)
            if (!atlantic[m-1][i]) dfs(m-1, i, heights, atlantic); 
        
        for (int i=0; i<m; i++){
            for (int j=0; j<n; j++)
                if (pacific[i][j] && atlantic[i][j])
                    ans.push_back({i, j}); 
        }

        return ans; 
    }
};