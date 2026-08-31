// Last updated: 9/1/2026, 12:07:57 AM
1class Solution {
2public:
3    void dfs(vector<vector<int>>& grid, vector<vector<bool>>& vis, int i, int j, int &perimeter) {
4        vis[i][j] = true; 
5        for (int x=0; x<4; x++) {
6            int drow[] = {-1, 0, 1, 0}; 
7            int dcol[] = {0, 1, 0, -1};
8
9            int nrow = i + drow[x]; 
10            int ncol = j + dcol[x]; 
11
12            if (nrow >= 0 && ncol >= 0 && nrow < grid.size() && ncol < grid[0].size()) {
13                if (grid[nrow][ncol] == 1 && !vis[nrow][ncol]) 
14                    dfs (grid, vis, nrow, ncol, perimeter); 
15                else if (grid[nrow][ncol] == 0) perimeter++; 
16            }
17            else perimeter++;
18        }
19    }
20    int islandPerimeter(vector<vector<int>>& grid) 
21    {
22        vector<vector<bool>> vis(grid.size(), vector<bool> (grid[0].size(), false)); 
23        int perimeter=0; 
24        for (int i=0; i<grid.size(); i++) {
25            for (int j=0; j<grid[0].size(); j++) {
26                if (grid[i][j] == 1 && !vis[i][j]) dfs(grid, vis, i, j, perimeter); 
27            }
28        } 
29
30        return perimeter;    
31    }
32};