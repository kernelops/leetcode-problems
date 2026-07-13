// Last updated: 7/13/2026, 10:37:34 PM
1class Solution {
2public:
3    void dfs(int i, int j, vector<vector<int>>& grid, vector<vector<bool>>& vis, int &perimeter){
4        vis[i][j] = true; 
5        int drow[] = {1, 0, -1, 0}; 
6        int dcol[] = {0, 1, 0, -1}; 
7
8        for (int x=0; x<4; x++){
9            int nrow = i + drow[x]; 
10            int ncol = j + dcol[x]; 
11
12            if (nrow >= 0 && ncol >= 0 && nrow < grid.size() && ncol < grid[0].size()){
13                if (grid[nrow][ncol] == 0) perimeter++; 
14                else{
15                    if (!vis[nrow][ncol])
16                        dfs(nrow, ncol, grid, vis, perimeter); 
17                }
18            }
19            else perimeter++; 
20        }
21    }
22    int islandPerimeter(vector<vector<int>>& grid) 
23    {
24        int m=grid.size(), n=grid[0].size(), i=0, j=0, perimeter=0;
25        vector<vector<bool>> vis(m, vector<bool> (n, false)); 
26        for (i=0; i<m; i++){
27            for (j=0; j<n; j++){
28                if (grid[i][j] == 1 && !vis[i][j]){
29                    dfs(i, j, grid, vis, perimeter); 
30                    //return perimeter; 
31                } 
32            }
33        }    
34        return perimeter; 
35    }
36};