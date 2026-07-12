// Last updated: 7/12/2026, 10:53:49 PM
1class Solution {
2public:
3    void dfs(int i, int j, vector<vector<int>> &grid, vector<vector<bool>> &vis, int &count){
4        vis[i][j] = true; 
5        count++; 
6
7        int drow[] = {1, 0, -1, 0}; 
8        int dcol[] = {0, 1, 0, -1}; 
9
10        for (int x=0; x<4; x++){
11            int nrow = i + drow[x];
12            int ncol = j + dcol[x]; 
13
14            if (nrow >= 0 && nrow < grid.size() && ncol >= 0 && ncol < grid[0].size() && grid[nrow][ncol] == 1 && !vis[nrow][ncol]){
15                dfs (nrow, ncol, grid, vis, count);  
16            }
17        }
18    }
19    int maxAreaOfIsland(vector<vector<int>>& grid) 
20    {
21        vector<vector<bool>> vis(grid.size(), vector<bool> (grid[0].size(), false)); 
22
23        int m = grid.size(), n = grid[0].size(); 
24        int ans=0; 
25        for (int i=0; i<m; i++){
26            for (int j=0; j<n; j++){
27                if (grid[i][j] == 1 && !vis[i][j]){
28                    int count=0;
29                    dfs(i, j, grid, vis, count); 
30                    ans = max(ans, count); 
31                }
32            }
33        }   
34
35        return ans;  
36    }
37};