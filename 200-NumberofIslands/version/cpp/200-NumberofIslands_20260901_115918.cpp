// Last updated: 9/1/2026, 11:59:18 AM
1class Solution {
2public:
3    void dfs(vector<vector<char>>& grid, vector<vector<bool>>& vis, int i, int j) {
4        vis[i][j] = true; 
5
6        int drow[] = {-1, 0, 1, 0}; 
7        int dcol[] = {0, 1, 0, -1};
8
9        for (int x=0; x<4; x++) {
10            int nrow = i + drow[x]; 
11            int ncol = j + dcol[x]; 
12
13            if (nrow >= 0 && ncol >= 0 && nrow < grid.size() && ncol < grid[0].size() 
14            && grid[nrow][ncol] == '1' && !vis[nrow][ncol]) {
15                dfs(grid, vis, nrow, ncol); 
16            }
17        } 
18    }
19    int numIslands(vector<vector<char>>& grid) 
20    {
21        int ans=0; 
22        vector<vector<bool>> vis(grid.size(), vector<bool> (grid[0].size(), false)); 
23        for (int i=0; i<grid.size(); i++) {
24            for (int j=0; j<grid[0].size(); j++) {
25                if (grid[i][j] == '1' && !vis[i][j]) {
26                    ans++; 
27                    dfs(grid, vis, i, j); 
28                }
29            }
30        } 
31
32        return ans;    
33    }
34};