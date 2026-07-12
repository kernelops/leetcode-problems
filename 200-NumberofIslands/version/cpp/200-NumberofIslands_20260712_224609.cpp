// Last updated: 7/12/2026, 10:46:09 PM
1class Solution {
2public:
3    void dfs(int i, int j, vector<vector<char>> &grid, vector<vector<bool>> &vis){
4        vis[i][j] = true; 
5
6        int drow[] = {1, 0, -1, 0}; 
7        int dcol[] = {0, 1, 0, -1}; 
8
9        for (int x=0; x<4; x++){
10            int nrow = i + drow[x];
11            int ncol = j + dcol[x]; 
12
13            if (nrow >= 0 && nrow < grid.size() && ncol >= 0 && ncol < grid[0].size() && grid[nrow][ncol] == '1' && !vis[nrow][ncol])
14                dfs (nrow, ncol, grid, vis);  
15        }
16    }
17    int numIslands(vector<vector<char>>& grid) 
18    {
19        vector<vector<bool>> vis(grid.size(), vector<bool> (grid[0].size(), false)); 
20
21        int m = grid.size(), n = grid[0].size(); 
22        int ans=0; 
23        for (int i=0; i<m; i++){
24            for (int j=0; j<n; j++){
25                if (grid[i][j] == '1' && !vis[i][j]){
26                    dfs(i, j, grid, vis); 
27                    ans++; 
28                }
29            }
30        }   
31
32        return ans;  
33    }
34};