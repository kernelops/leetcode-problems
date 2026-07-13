// Last updated: 7/13/2026, 5:26:25 PM
1class Solution {
2public:
3    void dfs(int i, int j, vector<vector<int>>& grid, vector<vector<bool>>& vis, int &count){
4        vis[i][j] = true;
5        count += grid[i][j]; 
6
7        int drow[] = {1, 0, -1, 0}; 
8        int dcol[] = {0, 1, 0, -1}; 
9
10        for (int x=0; x<4; x++){
11            int nrow = i + drow[x];
12            int ncol = j + dcol[x]; 
13
14            if (nrow >= 0 && nrow < grid.size() && ncol >= 0 && ncol < grid[0].size() && grid[nrow][ncol] > 0 && !vis[nrow][ncol]){
15                dfs(nrow, ncol, grid, vis, count);  
16            }
17        }    
18    }
19    int findMaxFish(vector<vector<int>>& grid) 
20    {
21        int m=grid.size(), n=grid[0].size(); 
22        vector<vector<bool>> vis(m, vector<bool> (n, false)); 
23        int ans=0;
24
25        for (int i=0; i<m; i++){
26            for (int j=0; j<n; j++){
27                if (grid[i][j] > 0 && !vis[i][j]){
28                    int count=0; 
29                    dfs(i, j, grid, vis, count); 
30                    ans = max(ans, count); 
31                }
32                
33            }
34        } 
35
36        return ans;    
37    }
38};